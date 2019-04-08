void output(int n,int m,int a[],int b[])
{
  int i;
  printf("%d",a[0]);
  for(i=1;i<n;i++)
	  printf(" %d",a[i]);
  for(i=0;i<m;i++)
	  printf(" %d",b[i]);
}
void swap(int a[],int i,int j)
{
   int temp;	
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
}
void quicksort(int a[],int l,int r)
{
  int m,i,j;
  i=l; j=r; m=a[i];
  while(i<=j)
  {
     while((a[i]<m)&&(i<r)) i++;
	 while((a[j]>m)&&(j>l)) j--;
	 if(i<=j)
	 {
        swap(a,i,j);
		i++;
		j--;
	 }
  }
  if(i<r) quicksort(a,i,r);
  if(j>l) quicksort(a,l,j);
}
void input()
{
  int i,n,m,a[100],b[100];
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
  for(i=0;i<m;i++)
	  scanf("%d",&b[i]);
  quicksort(a,0,n-1);
  quicksort(b,0,m-1);
  output(n,m,a,b);
}
main()
{
  input();
}