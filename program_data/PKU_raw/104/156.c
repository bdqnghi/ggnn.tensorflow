void main()
{
	int a,b,i,t1,t2,p[12]={0},q[12]={0};

	scanf("%d%d",&a,&b);
	
	if(!(a==b))
	{for(i=0;i<12;i++)
	{
		if(a/((int)pow(2,i))==0)
		{
			t1=i;
			break;
		}
	}
	for(i=0;i<12;i++)
	{
		if(b/((int)pow(2,i))==0)
		{
			t2=i;
			break;
		}
	}
	p[t1]=a;
	q[t2]=b;
	for(i=t1;i>=0;i--)
	{
		p[i-1]=p[i]/2;
	}
	for(i=t2;i>=0;i--)
	{
		q[i-1]=q[i]/2;
	}
	for(i=0;i<12;i++)
	{
		if(q[i]!=p[i])
		{
			printf("%d",p[i-1]);
			break;
		}
	}   
	}
	if(a==b)
		printf("%d",a);
}
