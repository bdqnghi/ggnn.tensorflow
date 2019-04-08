int main(){
	int n,i;
	char inp[500][50];
	int len[500];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>inp[i];
		len[i]=strlen(inp[i]);
	}
	int l=80;
	for(i=0;i<n;i++)
	{
		if(l<len[i])
		{
			cout<<endl;
			l=80;
		}
		if(l!=80)
			cout<<" ";
		cout<<inp[i];
		l=l-1-len[i];
	}
	return 0;
}
