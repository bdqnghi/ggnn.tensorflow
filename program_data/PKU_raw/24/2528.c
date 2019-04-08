
int main(int argc, char* argv[])
{
	int n,i;cin>>n;
	char temp[100],maxs[1000],mins[100];
	int maxl,minl;
	cin>>maxs;
	for(i=0;i<100;i++) mins[i]=maxs[i];
	maxl=minl=strlen(maxs);

	for(i=1;i<n;i++)
	{
		cin>>temp;
		int t=strlen(temp);
		if(t>maxl)
		{
			maxl=t;
			for(int j=0;j<=maxl;j++)
			{
				maxs[j]=temp[j];
			}
		}

		if(t<minl)
		{
			minl=t;
			for(int j=0;j<=minl;j++)
			{
				mins[j]=temp[j];
			}

		}
	}

	cout<<maxs<<endl<<mins<<endl;

	return 0;
}
