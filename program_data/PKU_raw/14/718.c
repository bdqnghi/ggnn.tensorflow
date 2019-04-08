int main()
{
	struct student
	{
		char NUM[100000];
		int Ma;
		int Ch;	
	}stu;
    int n,i,x,max1,max2,max3,m1,m2,m3;
	max1=max2=max3=0;
	m1=m2=m3=0;

	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
        scanf("%s %d %d",stu.NUM,&(stu.Ma),&(stu.Ch));
		x=stu.Ma+stu.Ch;
	    if(x>max1)
		{
		max3=max2; 
		max2=max1;
		max1=x;
		m3=m2;
		m2=m1;
		m1=i;
		}
    else if(x==max1)
	{
		max3=max2; 
		max2=max1;
		max1=max1;
		m3=m2;
		m2=i;
	}
	else if(x<max1 && x>max2)
	{
		max3=max2; 
		max2=x;
		m3=m2;
	}
	
	else if(x==max2)
	{
		max3=max2; 
		m3=i;
	}
	else if(x<max2 && x>max3)
	{
		max3=x;
		m3=i;
	}
	}
	
	printf("%d %d\n",m1,max1);
	printf("%d %d\n",m2,max2);
	printf("%d %d\n",m3,max3);
	return 0;
}
