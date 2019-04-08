int main()
{
    int i,j,k,a,n=0;
    int b[16];
    scanf("%d",&a);
    while(a!=-1)
    {
     i=2;
     b[1]=a;
     do
     {
     scanf("%d",&a);
     b[i]=a;
     i=i+1;
                }
     while(a!=0);
     for(j=1;j<=i-3;j++)
     {
     for(k=j+1;k<=i-2;k++)
     {
     if(b[j]==2*b[k]||2*b[j]==b[k])
     n=n+1;
                          }
                        }  
     printf("%d\n",n);
     n=0;
     scanf("%d",&a);  }     
} 
  