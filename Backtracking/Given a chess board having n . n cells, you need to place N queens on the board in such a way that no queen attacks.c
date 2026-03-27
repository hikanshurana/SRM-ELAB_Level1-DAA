#include <stdio.h>
#include <stdlib.h>   // <-- Fix added

int n, board[11], found=0;

int safe(int row,int col){
    for(int i=0;i<row;i++)
        if(board[i]==col || abs(board[i]-col)==row-i)
            return 0;
    return 1;
}

void solve(int row){
    if(row==n){ found=1; return; }
    for(int col=0;col<n;++col){
        if(safe(row,col)){
            board[row]=col;
            solve(row+1);
            if(found) return;
        }
    }
}

int main(){
    scanf("%d",&n);

    if(n==2 || n==3){
        printf("Not possible");
        return 0;
    }

    solve(0);

    if(!found){
        printf("Not possible");
        return 0;
    }

    int i,j;
    for(i=0;i<n;++i){
        for(j=0;j<n;++j)
            printf("%d ", board[i]==j);
        printf("\n");
    }
    return 0;
}