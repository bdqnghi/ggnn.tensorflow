int main()
{
	int x,y,a[11],b[11],num1,num2;
	cin>>x>>y;
	int i=0;
	a[i]=x;
	while(x>1)
	{
		x=x/2;
		i++;
		a[i]=x;
	}
	num1=i+1;
	int j=0;
	b[j]=y;
	while(y>1)
	{
		y=y/2;
		j++;
		b[j]=y;
	}
	num2=j+1;
	int flag=0;
	for(i=0;i<num1;i++)
	{
		for(j=0;j<num2;j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				cout<<a[i]<<endl;
				break;
			}
		}
		if(flag==1)
			break;
	}
	return 0;
}
