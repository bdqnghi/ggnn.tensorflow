int main()
{
	struct st 
	{   int num;
	    int x;
		int y; 
        int sum; 
	}a[100000],m1,m2,m3;
	int n,i,j;
	scanf("%d",&n);
    for (i=0;i<n;i++)
	{     scanf("%d %d %d",&a[i].num,&a[i].x,&a[i].y);
	      a[i].sum=a[i].x+a[i].y;
	}
	m1.sum=0; m2.sum=0; m3.sum=0;
	for (i=0;i<n;i++)
		if (a[i].sum>m1.sum)  m1=a[i];
	for (i=0;i<n;i++)	
		if ((a[i].sum>m2.sum)&&(a[i].sum<=m1.sum)&&(a[i].num!=m1.num)) m2=a[i];
	for (i=0;i<n;i++)
	  if ((a[i].sum>m3.sum)&&(a[i].sum<=m2.sum)&&(a[i].num!=m2.num)&&(a[i].num!=m1.num)) m3=a[i];	
	printf("%d %d\n%d %d\n%d %d\n",m1.num,m1.sum,m2.num,m2.sum,m3.num,m3.sum);
	return 0;
}

