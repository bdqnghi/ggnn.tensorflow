//
//  main.cpp
//  hw
//
//  Created by ? ? on 12-12-19.
//  Copyright (c) 2012? ? ?. All rights reserved.
//

int number (char x)
{
    if (x>='0'&&x<='9') {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main(int argc, const char * argv[])
{
    char str[LEN+3];
    gets(str);
    int len=strlen(str);
    str[len+1]='^';
    for (int i=0; i<len; i++) {
        if (number(str[i])) {
            str[i]=0;
        }
    }
    char *begin,*end;
    int k=0;
    while (str[k]==0) {
        k++;
    }
    begin=&str[k];end=&str[k+strlen(begin)];
    while (1) {
        cout<<begin<<endl;

        int i=1;
        while (*(end+i)==0&&*(end+i)!='^') {
            i++;
        }
        if (*(end+i)=='^') {
            break;
        }
        begin=end+i;
        end+=i+strlen(begin);
    }
    return 0;
}
