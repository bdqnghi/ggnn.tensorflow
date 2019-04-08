
int main()
{
	int n;
	int m=0;

	int a[100][100];
	int (*p)[100];
	cin>>n;
	for (int k=0;k<n;k++) 
	{

		int sum=0;

		p=a;

		for (int i=0;i<n;i++)    //??
		{
			for (int j=0;j<n;j++)
			{
				cin>>*(*(p+i)+j);
			}
		}

		int min1=*(*(p+0)+0);
		for (int count=0;count<n;count++)  //??n?
		{


			m=n-count;
			for (int i=0;i<m;i++)   //???
			{
				min1=*(*(p+i)+0);
				for (int j=0;j<m;j++) // ??????
					if (*(*(p+i)+j)<min1) min1=*(*(p+i)+j);
				for (int j=0;j<m;j++) // ?
					*(*(p+i)+j)-=min1;

			}
			for (int j=0;j<m;j++)   //???
			{
				min1=*(*(p+0)+j);
				for (int i=0;i<m;i++) // ??????
					if (*(*(p+i)+j)<min1) min1=*(*(p+i)+j);
				for (int i=0;i<m;i++) // ?
					*(*(p+i)+j)-=min1;
			}

			//cout<<a[1][1];
			sum+=*(*(p+1)+1);

			for (int i=2;i<m;i++)   //??
			{
				for (int j=0;j<m;j++) 
					*(*(p+i-1)+j)=*(*(p+i)+j);
			}
			for (int j=2;j<m;j++)   //??
			{
				for (int i=0;i<m;i++) 
					*(*(p+i)+j-1)=*(*(p+i)+j);
			}





		}
		sum-=*(*(p+1)+1);

		cout<<sum<<endl;




	}








	return 0;
}