int number(int n)
{
	int i,k=1;
	for(i=1;;i++)
	{
		k*=2;
		if(n<k)
			break;
	}
	return i;
}
void array(int a[],int number,int n)
{
	a[number]=n;
	int l=number;
	int i;
	for(i=1;i<l;i++)
	{
		if(n%2==0)
			n/=2;
		else
			n=(n-1)/2;
		number-=1;
		a[number]=n;
	}
}

void main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int m1,n1,k=0;

	m1=number(m);
	n1=number(n);
	int a[100]={0},b[100]={0};
	array(a,m1,m);
	array(b,n1,n);
	int i,j;
	for(i=m1;i>=1;i--)
	{
		for(j=n1;j>=1;j--)
		{
			if(a[i]==b[j])
			{
				printf("%d\n",a[i]);
				k=1;
				break;
			}
		}
		if(k)
			break;
	}
}

		
