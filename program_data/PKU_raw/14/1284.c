struct student
{
	int num,z;
}a,max1,max2,max3;

void main()
{
	int i,n,x,y;
	scanf("%d",&n);	
	max1.z=-1;
	max2.z=-1;
	max3.z=-1;
	for (i=0;i<n;i++)
	{
		scanf("%d %d %d",&a.num,&x,&y);
		a.z=x+y;
		if (a.z>max1.z)
		{
			max3=max2;
			max2=max1;
			max1=a;
		}
		else if (a.z>max2.z)
		{
			max3=max2;
			max2=a;
		}else if (a.z>max3.z)
		{
			max3=a;
			max3=a;
		}
	}
	printf("%d %d\n%d %d\n%d %d\n",max1.num,max1.z,max2.num,max2.z,max3.num,max3.z);
}
