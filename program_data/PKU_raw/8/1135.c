main()
{   
  int x,y;
  void forget(int,int);
  forget(x,y);
  return 0;
}	
void forget(int x,int y)
 {
   int i,j,k,t,T;
   int a[max]={0},b[max];
    scanf("%d %d",&x,&y);
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<y;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<x-1;i++)
	{
	for(j=i+1;j<x;j++)
	{
		if(a[i]>a[j])
		{
			t=a[j];
			a[j]=a[i];
			a[i]=t;
		}
	}}


	for(i=0;i<y-1;i++)
	{
	for(j=i+1;j<y;j++)
	{
		if(b[i]>b[j])
		{
			T=b[j];
			b[j]=b[i];
			b[i]=T;
		}
	}}
	printf("%d",a[0]);
	for(j=1;j<x;j++)
	printf(" %d",a[j]);
	for(j=0;j<y;j++)
	printf(" %d",b[j]);
	

}