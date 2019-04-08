


int num[500]={4,2,8,1,4,7,3,7,0,1};


void cul(int num[],int t)
{
	int s[500]={0},k=0;
	for (int j=0;j<500;j++)
	{
		s[j]=t*num[j]+k;
		num[j]=s[j]%10;
		k=s[j]/10;
	}
}

void out(int num[])
{
	int sum,i,j,k;
	for (i=0;i<500;i++)
    {
		sum=0;	
		for (j=i;j<500;j++)
		{
			sum+=num[j];
			if (sum>0)
				break;
		}
		if (sum==0)
			break;
	}
	for (k=i-1;k>=0;k--)
		cout << num[k];
}

int main()
{
	int n,sum=1;
	cin >> n;
	if (n<=30)
	{
		for (int i=0;i<n;i++)
			sum=2*sum;
		cout << sum <<endl;
	}
	else
	{
		n=n-30;
	do
	{	
		if (n>=3)
		{
			cul(num,8);
			n-=3;
		}
		if (n==2)
		{
			cul(num,4);
			n-=2;
		}
		if (n==1)
		{
			cul(num,2);
			n--;
		}
	}
	while (n!=0);
	out(num);
	}
	return 0;
}
