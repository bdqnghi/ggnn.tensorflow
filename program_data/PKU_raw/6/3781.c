int main()
{
  int m,n,k;
  scanf("%d",&k);
  int i;
  for(i=0;i<k;i++)
  {
  scanf("%d %d",&m,&n);
  char a[100][100];
  int j,l;
  
  for(j=0;j<m;j++)
  {
     for(l=0;l<n;l++)
	 {
	   scanf("%d",&a[j][l]);
	 }
  }
  int sum=0;
  if(m==1)
  { for(l=0;l<n;l++)
  sum=sum+a[0][l];}
	 else
	 {for(l=0;l<n;l++)
	 sum=sum+a[0][l]+a[m-1][l];}
	 if(n==1)
	 {for(j=1;j<m-1;j++)
	 sum=sum+a[j][0];}
	 else
	 {
  for(j=1;j<m-1;j++)
	  sum=sum+a[j][0]+a[j][n-1];
	 }
  printf("%d\n",sum);
  }
}