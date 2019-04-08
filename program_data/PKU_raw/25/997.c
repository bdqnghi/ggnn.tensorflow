int main()
{
	int n=0,a[50],b[50],c=0,num=0,yushu=0;
	cin>>n;
	int i=0;
	a[0]=1;
	b[0]=1;
	for(i=1;i<50;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		num=0;
		yushu=0;
		c=a[num]*2+yushu;
		if(c<10)
			b[num]=c;
		else if(c>=10)
		{
			b[num]=c%10;
			yushu=c/10;
		}
		num++;
		//while(a[num-1]!=0 && num-1>=0)
		while(num<50)
		{
			c=a[num]*2+yushu;
			if(c<10)
			{
				b[num]=c;
				yushu=0;
			}
			else if(c>=10)
			{
				b[num]=c%10;
				yushu=c/10;
			}
			num++;
		}
		for(int j=0;j<50;j++)
			a[j]=b[j];
	}
	i = 49;
	while(a[i--] == 0);

	for(i++;i>=0;i--)
	{
		//if(a[i]!=0)
		cout<<a[i];
	}
	return 0;
}