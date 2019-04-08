int main()
{
    int n,c,i,j,k=0,temp,m=0;
    int a[2000],b[2000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
     for(m=0;m<n;m++)
  {   if(a[m]%2==0)
     continue;
  else
 {
  b[k]=a[m];
  k++;
}
}
   for(j=k-1;j>=1;j--)
   {
                    for(c=0;c<j;c++)
                    if(b[c]>b[c+1])
                   { temp=b[c+1];
                   b[c+1]=b[c];
                    b[c]=temp;}
                    }            
               printf("%d",b[0]);
                              for(i=1;i<k;i++)
                                {       printf(",%d",b[i])  ;}
                return 0;
      }