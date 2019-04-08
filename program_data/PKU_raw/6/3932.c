//
//  main.cpp
//  ds
//
//  Created by Love on 12-12-27.
//  Copyright (c) 2012? Love. All rights reserved.
//


int main(){
    int tol,i,j,sum,k,x[100][100],row,line;
    scanf("%d",&tol);
    for (k=0,sum=0; k<tol; k++) {
        sum=0;
        scanf("%d%d",&row,&line);
        for (i=0; i<row; i++) {
            for (j=0; j<line; j++) {
                scanf("%d",&x[i][j]);
            }
        }
        if (line==1) {
            for (i=0; i<row; i++) {
                sum+=x[i][0];
            }
        }else{

        for (i=0; i<row; i++) {
            sum+=x[i][0];
            sum+=x[i][line-1];
        }
        }
        if (row==1) {
            for (i=1; i<line-1; i++) {
                sum+=x[0][i];
            }
        }else{
        for (i=1; i<line-1; i++) {
            sum+=x[0][i];
            sum+=x[row-1][i];
        }
        }
        printf("%d\n",sum);
        

    }
    return 0;
}