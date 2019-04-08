int aMaxLen[35];
int nTmp;
int main()
{
	int k,i;
	cin>>k;
	int b[25];
	for(i=0;i<k;i++)
		cin>>b[i];
		aMaxLen[1]=1;
	for(i=2;i<=k;i++)
	{
		int nTmp=0;
		for(int j=1;j<i;j++)
		{
			if(b[i]<b[j])
			{
				if(nTmp<aMaxLen[j])
					nTmp=aMaxLen[j];
			}
		}
		aMaxLen[i]=nTmp+1;
	}
	int nMax=-1;
	for(i=1;i<=k;i++)
		if(nMax<aMaxLen[i])
			nMax=aMaxLen[i];
	cout<<nMax<<endl;
	
	return 0;
}