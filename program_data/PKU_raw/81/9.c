int exchange(int num[5][5],int p,int q);
int main()
{
	int i,p,q,num[5][5],j,pan;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>num[i][j];
	cin>>p>>q;
	pan=exchange(num,p,q);
	if(pan==0)
		cout<<"error"<<endl;
	else
	{
		for(i=0;i<5;i++)
		{
			cout<<num[i][0];
			for(j=1;j<5;j++)
				cout<<" "<<num[i][j];
			cout<<endl;
		}
	}
	return 0;
}
int exchange(int num[5][5],int p,int q)
{
	int i,temp;
	if(p>=0&&p<=4&&q>=0&&q<=4)
	{
		for(i=0;i<5;i++)
		{
			temp=num[p][i];
			num[p][i]=num[q][i];
			num[q][i]=temp;
		}
		return 1;
	}
	else
		return 0;
}