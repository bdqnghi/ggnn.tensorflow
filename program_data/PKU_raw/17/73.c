int main()
{
    int a[120];
    char s[120],s1[120];
    int i,j,k,m,n,l;
    while (1)
    {
        gets(s);
        if (strcmp(s,s1)==0) break;
        strcpy(s1,s);
        memset(a,0,sizeof(a));
        l=strlen(s);        
        for (i=0;i<l;i++)
        {
        if (s[i]=='(') a[i]=1;
        if (s[i]==')') a[i]=-1;
        }
        
        for (i=0;i<l;i++)
        {
            if ((s[i]=='(')&&(a[i]!=0))
            {
              j=i+1;
              while ((a[j]==0)&&(j<l)) j++;
              if ((s[j]==')')&&(a[j]!=0)) 
              {
                a[i]=0;a[j]=0;
              }
            }
            if ((s[i]==')')&&(a[i]!=0))
            {
              j=i-1;
              while ((a[j]==0)&&(j>0)) j--;
              if ((s[j]=='(')&&(a[j]!=0)) 
              {
                a[i]=0;a[j]=0;
              }
            } 
        }
        printf("%s\n",s);
        for (i=0;i<l;i++) 
        {
            if (a[i]==1) printf("$");
        else if (a[i]==-1) printf("?"); 
        else printf(" ");
        }                            
        printf("\n");
        }
       
        return 0;
}            

