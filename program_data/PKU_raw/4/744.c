//
//  main.cpp
//  ??????????
//
//  Created by mac on 12-12-13.
//  Copyright (c) 2012? mac. All rights reserved.
//

int main(){
    int max, row,col,array[100][100];
    cin>>row>>col;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>array[i][j];
    int (*p)[100];
    p=array;
    for(int i=0;i<col;i++){
    for(int j=i;j>=0;j--){
        if((i-j)<row)
        cout<<*(*(p+i-j)+j)<<endl;
       }
    }
    if(row>col)
        max=row;
    else
        max=col;
    for(int i=col;i<=col+row-1;i++){
        for(int j=col-1;j>=0;j--){
            if((i-j)<row&&i-col+1>=0)
            cout<<*(*(p+i-j)+j)<<endl;
        }
    }
}
