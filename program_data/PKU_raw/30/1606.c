
int main(void)
{
	int n,sum=0;
	cin >>n;
	for(int i=1;i<=n;i++)
	{
		if (i%7==0) continue;
		else if ((i-7)%10==0) continue;
		else if (i>69&&i<80) continue;
		else sum+=i*i;
	}
	cout <<sum;
} 