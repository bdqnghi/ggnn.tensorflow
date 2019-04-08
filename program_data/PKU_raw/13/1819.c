int main(){
	int n,a[20000],i,j;
	cin>>n;
	int count=n;
	for(i=0;i<count;i++)
	{
		cin>>a[i];
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				i--;
				count--;
				break;
			}
		}
	}
	for(i=0;i<count;i++)
	{
		if(i==0)
			cout<<a[i];
		else
			cout<<" "<<a[i];
	}
	return 0;
}