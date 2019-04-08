//
//  Created by Chu-Pan,Wong on Dec 1, 2013.
//  Copyright (c) 2013 ChuPan,Wong. All rights reserved.
//




int routex[1000];
int routey[1000];

int main(int argc, char** argv){
    int x,y;
    cin>>x>>y;
    int nx,ny;
    for (nx=0; x!=1; nx++) {
        routex[nx]=x;
        if (x%2==0) {
            x/=2;
        }
        else{
            x=(x-1)/2;
        }
    }
    for (ny=0; y!=1; ny++) {
        routey[ny]=y;
        if (y%2==0) {
            y/=2;
        }
        else{
            y=(y-1)/2;
        }
    }
    routex[nx]=routey[ny]=1;
    int res;
    while (routex[nx]==routey[ny]) {
        if (nx<0||ny<0) {
            break;
        }
        res = routex[nx];
        nx--; ny--;
    }
    cout<<res<<endl;
    return 0;
}