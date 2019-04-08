char s[100000];
void tc(int);
int main()
{
    int a[27],i,t,k,q;
    scanf("%d\n",&k);
    while(k)
    {
        q=0;
        for(i=1;i<=26;i++)
            a[i]=0;     
        gets(s);
        for(i=0;s[i]!='\0';i++)
        {
            t=s[i]-96;
            a[t]++;
        }
        for(i=1;i<=26;i++)
            if(a[i]>1) tc(i);
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]!=1)
            {
                printf("%c\n",s[i]);
                q=1;
                break;
            }
        }
        if(q==0) printf("no\n");
        k--;
    }
    return 0;
}
void tc(int i)
{
     i=i+96;
     int j;
     for(j=0;s[j]!='\0';j++)
         if(s[j]==i) 
             s[j]=1;
}
