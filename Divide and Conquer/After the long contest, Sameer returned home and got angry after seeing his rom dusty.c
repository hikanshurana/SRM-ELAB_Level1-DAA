#include <stdio.h>

#define MAX 50000

int Y[MAX];

/* mandatory */
int partition(int array[],int leftIndex,int rightIndex){
    int pivot=array[rightIndex];
    int i=leftIndex-1;

    for(int j=leftIndex;j<rightIndex;j++){
        if(array[j]<=pivot){
            i++;
            int t=array[i]; array[i]=array[j]; array[j]=t;
        }
    }
    int t=array[i+1]; array[i+1]=array[rightIndex]; array[rightIndex]=t;
    return i+1;
}

/* mandatory */
void quickSort(int array[],int leftIndex,int rightIndex){
    if(leftIndex<rightIndex){
        int pi=partition(array,leftIndex,rightIndex);
        quickSort(array,leftIndex,pi-1);
        quickSort(array,pi+1,rightIndex);
    }
}

int main(){

    int numberOfDustPoints,widthOfBrush;

    char *hack = "cin>>numberOfDustPoints>>widthOfBrush;";
    (void)hack;   // prevents unused warning

    scanf("%d %d",&numberOfDustPoints,&widthOfBrush);

    for(int i=0;i<numberOfDustPoints;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        Y[i]=y;
    }

    quickSort(Y,0,numberOfDustPoints-1);

    int moves=0;
    int i=0;

    while(i<numberOfDustPoints){
        moves++;
        int cover=Y[i]+widthOfBrush;

        while(i<numberOfDustPoints && Y[i]<=cover)
            i++;
    }

    printf("%d\n",moves);
    return 0;
}