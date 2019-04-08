//
//  Created by Chu-Pan,Wong on Nov 11, 2013.
//  Copyright (c) 2013 ChuPan,Wong. All rights reserved.
//



int main(int argc, char** argv){
    int m[5][5];
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin>>m[i][j];
        }
    }
    int rowmax[5];
    for (int i=0; i<5; i++) {
        int max=m[i][0];
        for (int j=1; j<5; j++) {
            if(m[i][j]>max)
                max = m[i][j];
        }
        rowmax[i] = max;
    }
    int colmin[5];
    for (int j=0; j<5; j++) {
        int min=m[0][j];
        for (int i=1; i<5; i++) {
            if(m[i][j]<min)
                min = m[i][j];
        }
        colmin[j] = min;
    }
    int cnt=0;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if(m[i][j]==rowmax[i]&&m[i][j]==colmin[j]){
                cnt++;
                cout<<i+1<<" "<<j+1<<" "<<m[i][j]<<endl;
            }
        }
    }
    if(cnt==0)
        cout<<"not found"<<endl;
    return 0;
}