int main()
{
	int n,i,j;
	cin >>n;
	for (int k=0;k<n;k++)
	{
		int a[100][100],ans=0;
		for (i=0;i<n;i++)
			for (j=0;j<n;j++)
				cin >>*(*(a+i)+j);
		for (int p=0;p<n-1;p++)
		{
			int min=**a;
			for (i=0;i<n-p;i++)        //???
			{
				for (j=0;j<n-p;j++)
				{
					if (min>*(*(a+i)+j))
						min=*(*(a+i)+j);
				}
				for (j=0;j<n-p;j++)
				{
					*(*(a+i)+j)-=min;
				}
				min=**(a+i+1);
			}
			min=**a;                 //???
			for (i=0;i<n-p;i++)
			{
				for (j=0;j<n-p;j++)
				{
					if (min>*(*(a+j)+i))
						min=*(*(a+j)+i);
				}
				for (j=0;j<n-p;j++)
				{
					*(*(a+j)+i)-=min;
				}
				min=*(*a+i+1);
			}
			ans+=*(*(a+1)+1);
			for(i=1;i<n-p;i++)         //??
			{
				for (j=0;j<n-p;j++)
					*(*(a+i)+j)=*(*(a+i+1)+j);
			}
			for(i=1;i<n-p;i++)         //??
			{
				for (j=0;j<n-1-p;j++)
					*(*(a+j)+i)=*(*(a+j)+i+1);
			}
		}
		cout <<ans<<endl;
		ans=0;
	}
	return 0;
}