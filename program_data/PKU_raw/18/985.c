int n;
int array[101][101];
int search_x(int k)
{
	int i,j;
	int t=1000;
	for(j=0;j<n;j++)
			if(*(*(array+0)+j)<t)
				t=*(*(array+0)+j);
		for(j=0;j<n;j++)
			*(*(array+0)+j)=*(*(array+0)+j)-t;

	for(i=k;i<n;i++)
	{	t=1000;
		for(j=0;j<n;j++)
			if(*(*(array+i)+j)<t)
				t=*(*(array+i)+j);
		for(j=0;j<n;j++)
			*(*(array+i)+j)=*(*(array+i)+j)-t;
	}
	return 0;
}
int search_y(int k)
{
	int i,j;
	int t=1000;
	for(i=0;i<n;i++)
			if(*(*(array+i)+0)<t)
				t=*(*(array+i)+0);
		for(i=0;i<n;i++)
			*(*(array+i)+0)=*(*(array+i)+0)-t;
	for(j=k;j<n;j++)
	{	t=1000;
		for(i=0;i<n;i++)
			if(*(*(array+i)+j)<t)
				t=*(*(array+i)+j);
		for(i=0;i<n;i++)
			*(*(array+i)+j)=*(*(array+i)+j)-t;
	}
	return 0;
}
int change(int k)
{
	int i,j;
	for(i=0;i<n;i++)
		*(*(array+i)+k)=1000;
	for(j=0;j<n;j++)
		*(*(array+k)+j)=1000;
	return 0;}
int main()
{
	
	
	int i,j,k,w;
	int num;
	cin>>n;
	for(w=0;w<n;w++)
	{
		num=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			cin>>*(*(array+i)+j);
	
	for(k=0;k<n;k++)
	{
		search_x(k+1);
		search_y(k+1);
		num=num+*(*(array+k+1)+k+1);
		change(k+1);
	
	}
	
	cout<<num<<endl;}
	return 0;

}