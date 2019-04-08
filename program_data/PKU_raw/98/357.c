int main(){
	int n,i,j,len[10000],tempzifushu=0,dancishu=-1;
	cin>>n;
	char a[1000][1000];
	for(i=0;i<=n-1;i++)
	{
		len[i]=0;
		cin>>a[i];
	}
	len[0]=strlen(a[0])+1;
    for(i=0;i<=n-2;i++)
    	len[i+1]=strlen(a[i+1])+1+len[i];
    for(i=0;i<=n-2;i++)
    {
    	if((len[i]<=81+tempzifushu)&&(len[i+1]>=82+tempzifushu))
    	{
    		tempzifushu=len[i];
    		for(j=dancishu+1;j<=i-1;j++)
    			cout<<a[j]<<" ";
    		cout<<a[i];
    		cout<<endl;
    		dancishu=i;
    	}
    }
    for(i=dancishu+1;i<=n-2;i++)
    	cout<<a[i]<<" ";
    cout<<a[n-1];
    return 0;
}