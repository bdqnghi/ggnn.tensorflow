int main()
{
	int n,i,j=0,k=0,p;
	double arr[40],h1[40],h2[40],t;
	char s[2][10]={"male","female"},s1[40][10];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s1[i]>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(s1[i],s[0])==0)
		{
			h1[j]=arr[i];
			j++;
		}
		else
		{
			h2[k]=arr[i];
			k++;
		}
	}
	for(i=1;i<j;i++)
	{
		for(p=0;p<j-i;p++)
		{
			if(h1[p]>h1[p+1])
			{
				t=h1[p];
				h1[p]=h1[p+1];
				h1[p+1]=t;
			}
		}
	}
	for(i=1;i<k;i++)
	{
		for(p=0;p<k-i;p++)
		{
			if(h2[p]<h2[p+1])
			{
				t=h2[p];
				h2[p]=h2[p+1];
				h2[p+1]=t;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		cout<<fixed<<setprecision(2)<<h1[i]<<" ";
	}
	for(i=0;i<k-1;i++)
	{
		cout<<fixed<<setprecision(2)<<h2[i]<<" ";
	}
	cout<<fixed<<setprecision(2)<<h2[k-1];
	return 0;
}