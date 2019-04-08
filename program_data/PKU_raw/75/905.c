int main()
{
	int len1,len2;      
	char a[4000],b[4000];
	char c[1000][4],d[1000][4];
	int ren[1000],ren2[1000];
	cin>>a>>b;
	len1=strlen(a);
	len2=strlen(b);
	int k=0,j=0;
	for(int i=0;i<len1;i++)
	{
		if(a[i]==',')
			{ j++;
		k=0;}
		else 
		{
			c[j][k]=a[i];
			k++;
		}
	}
	cout<<j+1<<" ";
	j=0,k=0;
	for(int i=0;i<len2;i++)
	{
		if(b[i]==',')
		{
			j++;
			k=0;
		}
		else{
			d[j][k]=b[i];
			k++;
		}
	}
		for(int i=0;i<=j;i++)                  //???int? 
			ren[i]=(int)atof(c[i]); 
		for(int i=0;i<=j;i++)
		{
			ren2[i]=(int)atof(d[i]);
		}
		int count[2000];
		for(int i=0;i<2000;i++)
		{count[i]=0;}
		for(int i=0;i<2000;i++)
		{
			for(int k=0;k<=j;k++)
			{
				if(ren[k]<=i&&ren2[k]>i)
					count [i]++;
			}
		}
		int max=0;
		for(int i=0;i<2000;i++)
		{
			if(count[i]>max)
				max=count[i];
		}
		cout<<max<<endl;
	return 0;
}