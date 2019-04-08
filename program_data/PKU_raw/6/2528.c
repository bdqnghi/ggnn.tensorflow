

int main()
{
	int i,j,k,m,n,N,w,s;
	int a[100][100];
	scanf("%d\n",&N);
for(w=0;w<N;w++)
 {
	s=0;
	for(i=0;i<100;i++)
	for(j=0;j<100;j++)
	a[i][j]=0;
   scanf("%d%d",&m,&n);
   for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
  if((n>1)&&(m>1))
  {

   for(i=0;i<n;i++)
   s+=a[0][i];
   for(i=0;i<n;i++)
   s+=a[m-1][i];
   for(i=1;i<m-1;i++)
   s+=a[i][0];
   for(i=1;i<m-1;i++)
   s+=a[i][n-1];
  }
  if((n==1)&&(m>1))
  {
	s=a[0][0]+a[m-1][0];
  }
  if((n>1)&&(m==1))
  s=a[0][0]+a[0][n-1];
  if((n==1)&&(m==1))
  s=a[0][0];

   printf("%d\n",s);


 }
}