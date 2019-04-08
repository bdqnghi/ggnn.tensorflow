int main()
{
    int m,n,i,j;
    char a[500],b[500][5];
    int c[500];
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;a[i+n-1];i++)
    {m=i+n-1;
     for(j=0;j<n;j++)
      b[i][j]=a[i+j];}
    for(i=0;i<m-n+2;i++)
    {c[i]=0; 
     for(j=i+1;j<m-n+2;j++)
     {int t=0,k;
      for(k=0;k<n;k++)
      {if(b[i][k]==b[j][k]) t++;}
      if(t==n) 
       c[i]=c[i]+1;}
    }
    int max=0;
    for(i=0;i<m-n+2;i++)
    {if(max<=c[i]) max=c[i];}
    if(max>0)
    {
    printf("%d\n",max+1);
    for(i=0;i<m-n+2;i++)
    {if(max==c[i])
     {for(j=0;j<n;j++)
       printf("%c",b[i][j]);
      printf("\n");}}
      }
      else printf("NO");
    
    return 0;
}