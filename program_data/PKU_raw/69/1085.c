int main()
{
	char a[251],b[251];
	cin.getline(a,251);
	cin.getline(b,251);
	int a1[251],b2[251];
	memset(a1,0,sizeof(a1));
	memset(b2,0,sizeof(b2));
	for( int i = 0; i <= strlen( a ) - 1; i ++)
	{
		a1[i]=a[strlen(a)-i-1]-'0';
	}
	
	for(int i = 0; i <= strlen( b) - 1; i ++ )
	{
		b2[i]=b[strlen(b)-1-i]-'0';
	}
	
	for(int i=0;i<250;i++)
	{
		b2[i+1]+=(a1[i]+b2[i])/10;
		b2[i]=(a1[i]+b2[i])%10;
	}
	
	int k;
	for(k=249;k>=0;k--)	if(b2[k]!=0) break;
	for(int j=k;j>=0;j--) cout<<b2[j];
	if(k==-1) cout<<"0";
	cout<<endl;
	return 0;
}