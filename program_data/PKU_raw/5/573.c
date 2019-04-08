//
//  main.cpp
//  hw
//
//  Created by ? ? on 12-12-16.
//  Copyright (c) 2012? ? ?. All rights reserved.
//



int main(int argc, const char * argv[])
{
    double rate;
    char gen1[500],gen2[500];
    cin>>rate>>gen1>>gen2;
    int len1=strlen(gen1),len2=strlen(gen2),S=0;
    if (len1!=len2) {
        cout<<"error"<<endl;
        return 0;
    }
    for (int i=0; i<len1; i++) {
        if ((gen2[i]!='A'&&gen2[i]!='T'&&gen2[i]!='C'&&gen2[i]!='G')||(gen1[i]!='A'&&gen1[i]!='T'&&gen1[i]!='C'&&gen1[i]!='G')) {
            cout<<"error"<<endl;
            return 0;
        }
        if (gen1[i]==gen2[i]) {
            S++;
        }
    }
    double R;
    R=(double)S/len1;
    if (R>=rate) {
        cout<<"yes"<<endl;
        return 0;
    }
    else
    {
        cout<<"no"<<endl;
        return 0;
    }
   return 0;
}
