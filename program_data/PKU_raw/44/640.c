int reverse(int p)
{
	int m=0,k;
	k=abs(p);
	if (p!=0)
	{
		while (k!=0)
		{
			m=m*10+k%10;
			k=k/10;
		}
		m=m*(abs(p)/p);
	}
	else m=0;
	return m;
}
int main()
{
	int num,i;
	for (i=0;i<6;i++)
	{
		cin >>num;
		cout <<reverse(num)<<endl;
	}
	return 0;
}