int a[100][100]={0};
int n;
int count1=0;
int (*p)[100]=NULL;
int deal();
int main()
{
	int i,j,k;
	cin>>n;
	p=a;
	for (k=0;k<n;k++)
	{
		count1=0;
		for (i=0;i<n;i++)
			for (j=0;j<n;j++)
				cin>>*(*(p+i)+j);
		deal();
	}
return 0;
}
int deal()
{
	int min;
	int i,j,k;
	for (k=0;k<n-1;k++)
	{
		for (i=0;i<n;i++)
		{
			min=*(*(p+i));
			for (j=0;j<n;j++)
				if (*(*(p+i)+j)<min)
				{
					min=*(*(p+i)+j);
				}
			for (j=0;j<n;j++)
				*(*(p+i)+j)=*(*(p+i)+j)-min;
		}
		for (j=0;j<n;j++)
		{
			min=*(*p+j);
			for (i=0;i<n;i++)
				if (*(*(p+i)+j)<min)
				{
					min=*(*(p+i)+j);
				}
			for (i=0;i<n;i++)
				*(*(p+i)+j)=*(*(p+i)+j)-min;
		}
		count1+=*(*(p+1)+1);
		for (i=1;i<n-1;i++)
			for (j=0;j<n;j++)
			{
				*(*(p+i)+j)=*(*(p+i+1)+j);
			}
		for (j=1;j<n-1;j++)
			for (i=0;i<n;i++)
			{
				*(*(p+i)+j)=*(*(p+i)+j+1);
			}
	}
	cout<<count1<<endl;
	return 0;
}