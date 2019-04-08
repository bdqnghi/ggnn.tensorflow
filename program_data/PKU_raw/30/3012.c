
int has7(int a);
int has7(int a)
{
	int len,b,p,k;
	k=0;
	len=0;
	b=a;
	do{
		b=b/10;
		len++;
	}while (b>0);
	for (int i=len-1;i>=0;i--)
	{
		p = (int)(a/pow(10,i));
		if (p==7)
		{
			k=1;
			break;
		}
		a = a - p*(int)pow(10,i);
	}
	return k;
}

int main()
{
	int n,m;
	int s=0;
	scanf("%d",&n);
	for(m=1;m<=n;m++)
	{	
		if(m%7!=0 && has7(m)==0)
		{
			s = s + m*m;
		}
	}
	printf("%d",s);
	return 0;
}
