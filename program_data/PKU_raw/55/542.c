int f(char c)
{
	int w;
	if(c>='0' && c<='9')
	{
		w=c-'0';
		return w;
	}
	if(c>='a' && c<='z')
	{
		w=c-'a'+10;
		return w;
	}
	if(c>='A' && c<='Z')
	{
		w=c-'A'+10;
		return w;
	}
}

char g(int a)
{
	char c;
	if(a>=0 && a<9)
	{
		c=a+'0';
		return c;
	}
	if(a>=10)
	{
		c=a-10+'A';
		return c;
	}

}

int main()
{
	int a,b,i,j,l,x;
	long sum=0,y;
	char n[10];
	scanf("%d %s %d",&a,n,&b);
	if(a==b)
		printf("%s\n",n);
	else
	{
	l=strlen(n);
	for(i=0;i<l;i++)
	{
		x=f(n[i]);
		y=(long)pow(a,l-i-1);
		sum=sum+x*y;
	}
	if(sum==0)
		printf("0");
	else
	{
	char m[50];
	long z;
	l=(int)(log(sum)/log(b));
	for(i=0;i<=l;i++)
	{
		if(i==l)
		{
			z=sum;
			m[i]=g(z);
		}
		else
		{
			for(j=1;j<=b;j++)
			{
				z=j*pow(b,l-i);
				if(z>sum)
				{
					z=(j-1)*pow(b,l-i);
					sum=sum-z;
					m[i]=g(j-1);
					break;
				}
			}
		}
	}

	for(i=0;i<=l;i++)
		printf("%c",m[i]);
	printf("\n");
	}
	}

	return 0;



}
