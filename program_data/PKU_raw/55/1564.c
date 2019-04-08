//
//  main.cpp
//  hw
//
//  Created by ? ? on 12-12-16.
//  Copyright (c) 2012? ? ?. All rights reserved.
//

char *atob(int a,int b,char *str1)
{
    int len1=strlen(str1),Sum=0;
    static char str2[100]={0};
    for (int i=0; i<len1; i++) {//a????????
        int s;
        if (str1[i]<=57) {//?????????
            s=str1[i]-'0';
        }
        if(str1[i]>=65&&str1[i]<=90)
        {
            s=str1[i]-'A'+10;
        }
        if(str1[i]>90)
        {
            s=str1[i]-'a'+10;
        }
        Sum+=s*pow(a, len1-i-1);
    }
    for (int i=0; Sum>0; i++) {//??????b??
        if (Sum%b<10) {
            str2[i]=Sum%b+'0';
        }
        else
        {
            str2[i]=Sum%b-10+'A';
        }
        Sum-=Sum%b;
        Sum/=b;
    }
    int len=strlen(str2);
    str2[len]=0;
    return str2;
}

int main(int argc, const char * argv[])
{
    int a,b;
    char str1[100]={0};
    cin>>a>>str1>>b;
    if (str1[0]=='0') {
        cout<<"0";
        return 0;
    }
    char *str2=atob(a,b,str1);
    int len=strlen(str2);
    for (int i=len-1; i>=0; i--) {
        cout<<*(str2+i);
    }
    return 0;
}
