//******************************************
//?????????
//??????
int x,y,a[100],b[100],temp;//??????
int input()//???????
{
	int k=0,t=0,temp=0;
	cin>>x>>y;
	for(int i=0;i<x;i++)
		cin>>a[i];
	for(int j=0;j<y;j++)
		cin>>b[j];
	return 0;
}
int bubble()//???????
{
	for(int i=0;i<x-1;i++)
		for(int t=i+1;t<x;t++)
		{
			if(a[i]>a[t])
			{
				temp=a[t];
				a[t]=a[i];
				a[i]=temp;
			}
		}
	for(int j=0;j<y-1;j++)
		for(int t=j+1;t<y;t++)
		{
			if(b[j]>b[t])
			{
				temp=b[t];
				b[t]=b[j];
				b[j]=temp;
			}
		}
	return 0;
}
int combine()//????????????
{
	for(int i=0;i<x;i++)
		cout<<a[i]<<' ';
	for(int j=0;j<y-1;j++)
		cout<<b[j]<<' ';
	cout<<b[y-1];
	return 0;
}
int main()//???
{
	input();
	bubble();
	combine();
	return 0;
}