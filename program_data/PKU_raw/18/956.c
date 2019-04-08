int main()
{
	int s[100][100],n,j,k,p,min,count1=0,l = 0;
	cin>>n;
	for(int i = 0;i<n;i++)
	{
		count1 = 0;
		l=0;
		for(j=0;j<n;j++)
			for(p=0;p<n;p++)
				cin>>*(*(s+j)+p);
		for(k=1;k<n;k++)
		{
		for(j=0;j<n-l;j++)
		{
			min=*(*(s+j)+0);
			for(p=0;p<n-l;p++)
			{
				if(*(*(s+j)+p)<min) min = *(*(s+j)+p);
			}
			for(p=0;p<n-l;p++)
			{
				*(*(s+j)+p) = *(*(s+j)+p) - min;
			}
		}
		for(j=0;j<n-l;j++)
		{
			min=*(*(s)+j);
			for(p=0;p<n-l;p++)
			{
				if(*(*(s+p)+j)<min) min = *(*(s+p)+j);
			}


			for(p=0;p<n-l;p++)
			{
				*(*(s+p)+j) =*(*(s+p)+j) - min;
			}
		}
		count1+=(*(*(s+1)+1));
		for(j=0;j<n-l;j++)
			for(p=1;p<n-1-l;p++)
				*(*(s+j)+p) = *(*(s+j)+p+1);
		for(j=0;j<n-l;j++)
			for(p=1;p<n-1-l;p++)
				*(*(s+p)+j) = *(*(s+p+1)+j);
		l++;
		}
		cout << count1 << endl;
	}
	return 0;
}