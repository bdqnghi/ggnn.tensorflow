struct T
{
       char s[10],n;
}s[300]={0};
int m=0,max=1;
void search(char t[])
{
     int i,b,j;
     for (i=0;i<m;i++)
     {
         b=strcmp(t,s[i].s);
         if (b==0)
         {
            s[i].n++;
            if (s[i].n>max)
               max=s[i].n;
            return;
         }
     }
     m++;
     strcpy(s[i].s,t);
     s[i].n=1;
     return;
}
int main()
{
    int i,j,n,l;
    char S[600],t[10];
    scanf("%d",&n);
    scanf("%s",S);
    l=strlen(S);
    for (i=0;i<l-n+1;i++)
    {
        for (j=0;j<n;j++)
            t[j]=S[i+j];
        t[n]='\0';
        search(t);
    }
    if (max==1)
    {
       printf("NO\n");
       return 0;
    }
    printf("%d\n",max);
    for (i=0;i<m;i++)
        if (s[i].n==max)
           printf("%s\n",s[i].s);
    getchar();
    getchar();
    return 0;
}
