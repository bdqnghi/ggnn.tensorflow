void main()
{
 char a[100][100],b[100][100],eat;
 int i,ca,cb,n,j;
 scanf("%d",&n);
 for(j=0;j<n;j++)
  {
   scanf("%s",a[j]);
   scanf("%s",b[j]);
   
    
  }
 
 for(j=0;j<n;j++)
  {
   for(i=0;a[j][i]!='\0';i++)
    a[j][i]=a[j][i]-'1'+1;
   ca=i-1;
   for(i=0;b[j][i]!='\0';i++)
    b[j][i]=b[j][i]-'1'+1;
   cb=i-1;
   
for(i=ca;i-ca+cb>=0;i--)
    {
     if(a[j][i]<b[j][i-ca+cb])
      {
       a[j][i-1]-=1;
       a[j][i]=a[j][i]+10-b[j][i-ca+cb];
      }
     else
      a[j][i]=a[j][i]-b[j][i-ca+cb];
    }
   for(i=ca;i>=1;i--)
    if(a[j][i]==-1)
    {
     a[j][i]=9;
     a[j][i-1]-=1;
    }
   for(i=0;i<=ca;i++)
    a[j][i]=a[j][i]-1+'1';
   printf("%s\n",a[j]);
  }
}

