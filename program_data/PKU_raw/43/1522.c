int pa(int i);
int main()
{
	int m,i,p,q,a,b;
	scanf("%d",&m);
	for(i=1;2*i<m-3;i++)
	{
		a=2*i+1;
		b=m-1-2*i;
		p=pa(a);
		q=pa(b);
		if(p==0&&q==0&&a<=b)
		{
			printf("%d %d\n",a,b);
		}
	}
	return 0;
}

int pa(int i)
{
	int k,t=0;
	for(k=i-1;k>1;k--)
	{
		if (i%k==0){t++;}
	}	
	return t;
}