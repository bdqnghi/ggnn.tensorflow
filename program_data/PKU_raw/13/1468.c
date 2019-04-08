main()
{
     int n,m,k,i,j,l;
     int s[12000];
     scanf("%d",&n);
     m=n;l=0;
     for (i=1;i<=n;i++)
     { 
         l++;
     scanf("%d",&s[l]);
                 for (j=1;j<=l-1;j++) 
                 if (s[j]==s[l])
                 {
                 l--;m--;
                 }
                 }
        for (i=1;i<=m-1;i++)
        printf("%d ",s[i]);
        printf("%d",s[m]); 

}
