
int inDegree[10000];
int outDegree[10000];

int main()
{
	int N;
	cin>>N;
	memset(inDegree,0,sizeof(inDegree));
	memset(outDegree,0,sizeof(outDegree));
	int first,second;
	while(cin>>first>>second)
	{
		if(first==0&&second==0)
			break;
		outDegree[first]++;
		inDegree[second]++;
	}
	int i;
	for(i=0;i<N;i++)
	{
		if(outDegree[i]==0&&inDegree[i]==N-1)
			break;
	}
	if(i==N)
		cout<<"NOT FOUND\n";
	else
		cout<<i<<endl;
	return 0;
}
