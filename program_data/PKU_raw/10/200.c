int main(){
	int a[25];int b[25];
	int k,i,j,max2,max1;
	cin>>k;
	for(i=0;i<k;i++)
		cin>>a[i];
	b[0]=1;
	for(i=1;i<k;i++)
	{
		max1=1;
		for(j=i-1;j>=0;j--)
		{
			if(a[i]<=a[j])
			{
				if(max1<(b[j]+1))
				{
					max1=b[j]+1;
				}
			}
		}
		b[i]=max1;
	}
	max2=0;
	for(i=0;i<k;i++)
	{
		if(b[i]>max2)
		{
			max2=b[i];
		}
	}
	cout<<max2<<endl;
	return 0;
}


		

	