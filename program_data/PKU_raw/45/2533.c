//
//  main.c
//  ????
//
//  Created by ?  on 12-12-16.
//  Copyright (c) 2012? ? . All rights reserved.
//


char* f(char s1[],char s2[])
{
    char *p=s1, *q;
    int l=strlen(s1),i;
    q=strchr(s2, s1[0]);
    if(q==NULL)
        return q;
    else
    {
        for(i=0;p<s1+l;p++,q++,i++)
            if(*p!=*q) break;
        if(p==s1+l) return q-l;
        else
        {
            *(q-i)=0;
            return f(s1,s2);
        }
    }
}

int main()
{
    char s1[51]={0},s2[51]={0};
    scanf("%s%s",s1,s2);
    int i;
    i=f(s1,s2)-s2;
    printf("%d",i);
    return 0;
    
}
