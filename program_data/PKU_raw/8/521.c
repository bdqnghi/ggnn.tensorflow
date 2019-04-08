int m[100],n[100],*p,*q,a,b;
void input()
{
	p=m;q=n;
	int i;
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++,p++)
	{
		scanf("%d",p);
	}
	for(i=0;i<b;i++,q++)
	{
		scanf("%d",q);
	}
	p=m;q=n;
}
void sort(int *p,int a)
{
	int i,j,temp;
	for(i=0;i<a-1;i++)
	{
		for(j=0;j<a-i-1;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];p[j]=p[j+1];p[j+1]=temp;
			}
		}
	}
}
void mix()
{
	int i;
	for(i=0;i<b;i++)
	{
		p[a+i]=q[i];
	}
}
void output()
{
	int i;
	for(i=0;i<a+b-1;i++)
	{
		printf("%d ",*(p++));
	}
	printf("%d\n",*p);
}
main()
{
	input();
	sort(p,a);
	sort(q,b);
	mix();
	output();
	return 0;
}