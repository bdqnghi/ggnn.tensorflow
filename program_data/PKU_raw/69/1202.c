int maxi(int a,int b)
{
	if(a<b)
		return b;
	else return a;
}
int main()
{
	char a[260],b[260],flag=0;
	cin.getline(a,251);
	cin.getline(b,251);
	int na[260],nb[260],sum[260],i,j=0;
	int lena=strlen(a),lenb=strlen(b);
	memset(na,0,sizeof(na) );
	memset(nb,0,sizeof(nb) );
	memset(sum,0,sizeof(sum) );
	for(i=lena-1;i>=0;i--)
		na[j++]=a[i]-'0';
	j=0;
	for(i=lenb-1;i>=0;i--)
		nb[j++]=b[i]-'0';
	int m=maxi(lena,lenb);
	for(i=0;i<m;i++)
	{
		sum[i]+=na[i]+nb[i];
		if(sum[i]>=10)
		{
			sum[i]-=10;
			sum[i+1]++;
		}
	}
	i=m;
	while(sum[i]==0) i--; //???????0??
	if(i==-1)
		cout<<0<<endl;
	for(;i >= 0; i--)
		cout << sum[i]; 
	return 0;
}

