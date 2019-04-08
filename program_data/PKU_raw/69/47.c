int main()
{
	char x[300]={0},y[300]={0};
	int a[300]={0},b[300]={0},c[300]={0};
	int flag=0,lx,ly,n,k,i,flag2=0;
	cin>>x;
	cin>>y;

	lx=strlen(x);
	ly=strlen(y);

	n=0;
	for(i=lx-1;i>=0;i--)
	{
		a[n]=x[i]-'0';
		n++;
	}
	k=0;
	for(i=ly-1;i>=0;i--)
	{
		b[k]=y[i]-'0';
		k++;
	}


	for(i=0;i<lx||i<ly;i++)
	{
		c[i]+=a[i]+b[i];

		if(c[i]>=10)
		{
			c[i+1]=c[i+1]+c[i]/10;
			c[i]=c[i]%10;

		}
	}


	for(i=299;i>=0;i--)
	{
		if(c[i]!=0||flag==1)
		{
			cout<<c[i];
			flag=1;
		}

	}

	for(i=0;i<300;i++)
	{
		if(c[i]!=0)
		{
			flag2=1;
		}
	}

	if(flag2==0)
	{
		cout<<"0";
	}

	return 0;
}

