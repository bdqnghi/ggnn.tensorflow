int main()
{ 	
	int aa[300],bb[300];
	char a[300],b[300];
	cin>>a>>b;
	memset(aa,0,sizeof(aa));
	memset(bb,0,sizeof(bb));
	int i,j=0,k,m=0,n;
	for(i=strlen(a)-1;i>=0;i--)
		aa[j++]=a[i]-'0';
	for(k=strlen(b)-1;k>=0;k--)
		bb[m++]=b[k]-'0';
	for(n=0;n<300;n++)
	{
		aa[n]+=bb[n];
		if(aa[n]>=10)
		{
			aa[n+1]+=1;
			aa[n]-=10;
		}
	}
	
	int s=299;
	while(aa[s]==0&&s>=0)
		s--;
	if(s!=-1)		
	{
		for(int t=s;t>=0;t--)
			cout<<aa[t];
	}
	else
		cout<<'0';
	return 0;
}

	