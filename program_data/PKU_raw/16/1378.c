int main()
{
	int a[5],b[5],n,i;
	cin>>n;
	if(n==10000)
	{
		cout<<00001<<endl;
	}
	else
	{
		b[0]=n;
		for(i=0;i<4;i++)
		{
		    a[i]=b[i]/pow(10.0,(double)(3-i));
			b[i+1]=b[i]%(int)(pow(10.0,(double)(3-i)));
		}
		if(a[0]!=0)
		{
			cout<<a[3]<<a[2]<<a[1]<<a[0]<<endl;
		}
		else if(a[1]!=0)
		{
			cout<<a[3]<<a[2]<<a[1]<<endl;
		}
		else if(a[2]!=0)
		{
			cout<<a[3]<<a[2]<<endl;
		}
		else
		{
			cout<<a[3]<<endl;
		}
	}
	return 0;
}