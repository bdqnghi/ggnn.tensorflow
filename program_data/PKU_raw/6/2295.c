int main()
{  
  int a[100][100];
  int i,j,k,m,n,num,sum=0;
  int *p=NULL;
  cin>>num;
for(k=1;k<=num;k++)
{ 
  cin>>m>>n;
  for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    {
      cin>>*(*(a+i)+j);
    } 
    if(m==1||n==1) {
   for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     {
       sum=sum+*(*(a+i)+j);
     }
                 }
else
{
    for(i=0;i<n-1;i++)
     {
       sum=sum+*(*a+i);
     }
     for(i=0;i<m-1;i++)
      {
        sum=sum+*(*(a+i)+n-1);
      }
      for(i=1;i<n;i++)
      {
       sum=sum+*(*(a+m-1)+i);
       }
      for(i=1;i<m;i++)
      {
        sum=sum+**(a+i);
      }
  }
      cout<<sum<<endl;
      sum=0;
 }
 return 0;
}
      