//
//  main.cpp
//  hw
//
//  Created by ? ? on 12-12-16.
//  Copyright (c) 2012? ? ?. All rights reserved.
//


int main(int argc, const char * argv[])
{
    char str[LEN];
    gets(str);
    int len=strlen(str),k;
    for (int i=0; i<len; i+=k) {
        k=1;
        if (str[i]!=' ') {
            cout<<str[i];
        }
        else
        {
            cout<<" ";
            while (str[i+k]==' ') {
                k++;
            }
        }
    }
   return 0;
}
