int main()
{
	int i,j,k,p=0,q=0,r,s;  //i,j,k??????p,q??????r,s?????????????
	int a[5][5],m[5]={0},n[5]={0};  //??????a[5][5]?????????????m[5]?????????????n[5]???????????
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>m[i])
			{
				m[i]=a[i][j];
				n[i]=j;
			}
		}
		j=0;
	}
	i=0;j=0;
	for(i=0;i<5;i++)
	{
		j=n[i];
		for(k=0;k<5;k++)
		{
			if(a[k][j]<m[i])
			{
				p=1;
				break;
			}
		}
		if(p==1)
		{
			p=0;
			continue;
		}
		else
		{
			r=i+1;s=j+1;
			cout<<r<<' '<<s<<' '<<m[i]<<endl;
			q=1;
			break;
		}
	}
	if(q==0)
	{
		cout<<"not found"<<endl;
	}
	return 0;
}