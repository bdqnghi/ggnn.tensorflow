int main()
{
	int n;
	cin>>n;//n????
	int a[100]={0},b[100];
	a[0]=1;
	int p=0,temp,i1;
	if (n!=0)
	{
		for (int i=0;i<n;i++)
		{
			for (i1=0;i1<=99;i1++)
			{
				temp=a[i1]*2+p;
				b[i1]=temp%10;
				a[i1]=b[i1];
				p=temp/10;
			}
		}//??????
		int t=0,i2;
		for (i2=99;i2>=0;i2--)
		{
			if (b[i2]==0)
				continue;
			else if (b[i2]!=0)
				break;
		}
		for (int i3=i2;i3>=0;i3--)
			cout<<b[i3];
	}
	else
		cout<<1;//2?0???1
	return 0;
}