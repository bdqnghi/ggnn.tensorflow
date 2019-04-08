//
//  Created by Chu-Pan,Wong on Dec 3, 2013.
//  Copyright (c) 2013 ChuPan,Wong. All rights reserved.
//



int a[250];
int b[250];
char num[251];

int main(int argc, char** argv){
    scanf("%s", num);
    int aa = (int)strlen(num);
    for (int i=0; i<aa; i++) {
        a[i] = num[aa-1-i]-'0';
    }
    scanf("%s", num);
    int bb = (int)strlen(num);
    for (int i=0; i<bb; i++) {
        b[i] = num[bb-1-i]-'0';
    }
    for (int i=0; i<250; i++) {
        a[i] = a[i]+b[i];
        if (a[i]>9) {
            a[i+1]++;
            a[i]-=10;
        }
    }
    for (int i=0; i<250; i++) {
        if (a[i]>9) {
            a[i+1]++;
            a[i]-=10;
        }
    }
    int max=0;
    for (int i=249; i>=0; i--) {
        if(a[i]!=0){
            max = i;
            break;
        }
    }
    for (int i=max; i>=0; i--) {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}