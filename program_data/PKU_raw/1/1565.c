int num(int b,int min);
int x=1,m;
int main()
{
	int a,n,b;
	scanf("%d",&n);
	for(a=0;a<=n-1;a++)
	{
        scanf("%d",&b);
		m=b;
		b=num(b,2);
		printf("%d\n",b);
		x=1;
	}
	return 0;
}

int num(int b,int min)
{
	int a,c;

	for(a=min;a<b;a++)
	{
		if((b%a==0)&&(b/a>=a))
		{
            if(num(b/a,a)==1)
			{
				x++;
			}
		}
		if(a==m-1) return x;
	}
	return 1;
}