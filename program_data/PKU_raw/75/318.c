int main()
{
	char c;
	int a[1000],b[1000];
	int i=0,d,m,max,t=0;
	while((c=getchar())!='\n')
	{
		if(c!=','&&t==0)
		{
			a[i]=c-'0';
			t=1;
			i++;
		}
		else if(c!=','&&t==1)
		{
			i--;
			a[i]=a[i]*10+c-'0';
			t=1;
			i++;
		}
		else
		{
			t=0;
			continue;
		}
	}
	d=i;
	i=0;t=0;
	while((c=getchar())!='\n')
	{
		if(c!=','&&t==0)
		{
			b[i]=c-'0';
			t=1;
			i++;
		}
		else if(c!=','&&t==1)
		{
			i--;
			b[i]=b[i]*10+c-'0';
			i++;
		}
		else
		{
			t=0;
			continue;
		}
	}
	max=0;t=0;
	while(t<1000)
	{
		m=0;
		for(i=0;i<d;i++)
		{
			if(a[i]<=t&&b[i]>t)
				m++;
		}
		if(m>max)
			max=m;
		t=t+1;
	}
	printf("%d %d",d,max);
	return 0;
}