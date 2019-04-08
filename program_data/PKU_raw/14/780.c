int main()
{
	struct student{
		int number;
		int chinese;
		int math;
		int sum;
		}students[100000];
		int n,i;
        int a1,b1,a2,b2,a3,b3;
		int c1,c2;
		int max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&students[i].number,&students[i].chinese,&students[i].math);
		students[i].sum=students[i].chinese+students[i].math;
	}
	max=0;
	for(i=0;i<n;i++)
	{  
		if(students[i].sum>max)
		{
			max=students[i].sum;
			a1=students[i].number;
			b1=students[i].sum;
			c1=i;
		}
	}
	max=0;
	for(i=0;i<n;i++)
	{
	if(students[i].sum>max&&i!=c1)
		{
			max=students[i].sum;
			a2=students[i].number;
			b2=students[i].sum;
			c2=i;
		}
	}
   max=0;
   for(i=0;i<n;i++)
	{
		if(students[i].sum>max&&i!=c2&&i!=c1)
		{
			max=students[i].sum;
			a3=students[i].number;
			b3=students[i].sum;
		}
	}
	printf("%d %d\n",a1,b1);
    printf("%d %d\n",a2,b2);
    printf("%d %d\n",a3,b3);
	return 0;
}






		