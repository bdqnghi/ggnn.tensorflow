int main()
{
	int n,i,j=0,k=0,q;
	char sex[42][10];
	double height[42];
	double male[42];
	double female[42];
	double x;
	double *h;
	cin>>n;
	h = height;
	for(i=0;i<n;i++)
	{
		cin>>sex[i];
		cin>>*h++;
		cin.get();
	}
	h = height;
	for(i=0;i<n;i++)
	{
		if(sex[i][0]=='m')
		{
			male[j] = height[i];
			j++;
		}
		else
		{
			female[k] = height[i];
			k++;
		}
	}
	for(i=1;i<=j-1;i++)
	{
		for(q=0;q<=j-i-1;q++)
		{
			if(male[q]>male[q+1])
			{
				x = male[q];
				male[q] = male[q+1];
				male[q+1] = x;
			}
		}
	}
	for(i=1;i<=k-1;i++)
	{
		for(q=0;q<=k-i-1;q++)
		{
			if(female[q]<female[q+1])
			{
				x = female[q];
				female[q] = female[q+1];
				female[q+1] = x;
			}
		}
	}
	cout<<fixed<<setprecision(2)<<male[0];
	for(i=1;i<=j-1;i++)
	{
		cout<<" "<<fixed<<setprecision(2)<<male[i];
	}
	for(i=0;i<=k-1;i++)
	{
		cout<<" "<<fixed<<setprecision(2)<<female[i];
	}
	cout<<endl;
	return 0;
}