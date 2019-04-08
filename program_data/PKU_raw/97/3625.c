int main()
{
	int count(int facevalue,int sum,int n);
	int n,sum=0;
	cin>>n;
	int facevalue[6]={100,50,20,10,5,1},num[6];
	for(int i=0;i<6;i++)
	{
		num[i]=count(facevalue[i],sum,n);
		cout<<num[i]<<endl;
		sum+=num[i]*facevalue[i];
	}
	return 0;
}

/*-----?????????-----*/
int count(int facevalue,int sum,int n)
{
	for(int i=0;;)
	{
		if((i+1)*facevalue+sum<=n)
			i++;
		else
			return i;
	}
}