//
//  main.c
//  n-gram????
//
//  Created by ?  on 12-12-16.
//  Copyright (c) 2012? ? . All rights reserved.
//


char b[500][6]={0};
int p=1;

int f(char s[],int n,int l)
{
    int i,j,k=0,q=0;
    int t[500]={0};
    char w[500][6]={0},a[6]={0};
    for(i=0;i<l-n+1;i++)
    {
        for(j=0;j<n;j++)
        {
            a[j]=s[i+j];
        }
        for(j=0;j<k+1;j++)
            if(strcmp(a,w[j])==0) break;
        if(j<k+1)
            t[j]=t[j]+1;
        else
        {
            strcpy(w[k],a);
            t[k]=1;
            k++;
        }
    }
    for(j=0;j<k;j++)
        if(t[j]>p)
            p=t[j];
    for(j=0;j<k;j++)
    {
        if(t[j]>=p&&t[j]>1)
        {
            strcpy(b[q],w[j]);
            q++;
        }
    }

    if(p==1) return 0;
    else return q;
}


int main()
{
    int n;
    char s[501]={0};
    scanf("%d\n",&n);
    gets(s);
    int q,i;
    q=f(s,n,strlen(s));
    if(q==0) printf("NO\n");
    else
    {
        printf("%d\n",p);
        for(i=0;i<q;i++)
            puts(b[i]);
    }
    return 0;
    
}