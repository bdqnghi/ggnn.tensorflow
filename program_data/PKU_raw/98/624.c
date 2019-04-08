int n;//?????
char words[1000][100];//?????????
int wordlen[1000],longsum=0;//?????????
void out(int location)
{
	int i,j;
	for(i=location;i<n;i++)
	{
		longsum=longsum+wordlen[i]+1;
		if(longsum-1>80)
		{
			for(j=location;j<=i-2;j++)
				cout<<words[j]<<' ';
			cout<<words[i-1]<<endl;
			break;
		}
		if(longsum-1==80)
		{
			for(j=location;j<=i-1;j++)
				cout<<words[j]<<' ';
			cout<<words[i]<<endl;
			i++;
			break;
		}
		if(i==n-1)
		{
			for(j=location;j<n-1;j++)
				cout<<words[j]<<' ';
			cout<<words[n-1]<<endl;
			return;
		}
	}
	longsum=0;
	location=i;
	out(location);
}
int main()
{	
	int i,j;//????
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>words[i];
		wordlen[i]=strlen(words[i]);
	}
	out(0);
	return 0;
}