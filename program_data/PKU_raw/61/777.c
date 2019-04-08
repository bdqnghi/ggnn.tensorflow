
int main()
{
    int n,a,i,j;
    int c[22],b[22];
     c[1]=1;
    c[2]=1;
    for (i=3;i<22;i++)
      c[i]=c[i-1]+c[i-2];
    scanf("%d",&n);
    for (j=0;j<n;j++)
        {
          scanf("%d",&b[j]);
          printf("%d\n",c[b[j]]);
          }
  
}
    
