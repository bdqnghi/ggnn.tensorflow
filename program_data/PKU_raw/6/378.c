int main()
{
	int k;
	cin>>k;                       //??k?
	for(int a=0;a<k;a++)
	{
		int m,n;
		cin>>m>>n;
		int A[100][100];         //??????        
		int i,j;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>A[i][j];    //????
			}
		}
		int (*p)[100];          //????
		p = A;
		int num = 0;
		for(j=0;j<n;j++)
		{
			num = num+ *(*p+j); //???????
		}
		
		for(i=1;i<m-1;i++)      //??????????
		{
			num = num+ **(p+i)+ *(*(p+i)+n-1);
		}
	
		for(j=0;j<n;j++)        //????????
		{
			num = num+ *(*(p+m-1)+j);
		}

		cout<<num<<endl;        //????
	}
	return 0;
}