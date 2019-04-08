int f(char r[],int x[])
{
	int n,i,j,e=0;
	n=strlen(r);
	for(i=0;i<n;i++)
	{
		int k=r[i]-48;
		for(j=1;j<4;j++)
		{
			if(r[i+j]!=','&&r[i+j]!='\0')
				k=k*10+r[i+j]-48;
			else
				break;
		}
		i=i+j;
		x[e]=k;
		e=e+1;
	}
	return e;
}
void main()
{
	int i,j,n,m,q=1,x[1001],y[1001],a,b,s[1000]={0};
	char r[4000],c[4000];
	scanf("%s%s",r,c);
	n=strlen(r);
	m=strlen(c);
	for(i=0;i<n;i++)
	{
		if(r[i]==',')
			q=q+1;
	}
	a=f(r,x);
	b=f(c,y);
	int max=y[0];
	for(i=1;i<b;i++)
	{
		if(y[i]>max)
			max=y[i];
	}
	for(i=0;i<max;i++)
	{
		for(j=0;j<a;j++)
		{
			if(i+0.5>x[j]&&i+0.5<y[j])
				s[i]=s[i]+1;
		}
	}
	int max1=s[0];
	for(i=1;i<max;i++)
	{
		if(s[i]>max1)
			max1=s[i];
	}
	printf("%d %d",q,max1);
}







