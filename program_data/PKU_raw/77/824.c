int panduan(char a[],char b,char g)
{
	int l,bj,gj,bs,gs,i,k,t;
	l=strlen(a);
	bj=0;gj=0;bs=0;gs=0;
	k=l-1;
	while(a[k]!=b&&a[k]!=g)
		k--;
	for(i=k;i>=0;i--)
	{
		if(a[i]==b)
			bj++;
		else if(a[i]==g)
			gj++;
		if(bj==gj)
		{
			bs=i;
			gs=k;
		    break;
		}
	}
	t=100*bs+gs;
		return (t);
}
int main()
{
	char d[100];
	int n,length,m,i,j,t,k;
	char boy,girl;
	int weishu[100][2];
	cin>>d;
	length=strlen(d);
	boy=d[0];
	girl=d[length-1];
	for(n=0;n<length/2;n++)
	{
		m=panduan(d,boy,girl);
		weishu[n][0]=m/100;
		weishu[n][1]=m%100;
		d[m/100]='0';
		d[m%100]='0';
	
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if(weishu[i][1]>weishu[i+1][1])
			{t=weishu[i][1];weishu[i][1]=weishu[i+1][1];weishu[i+1][1]=t;
			m=weishu[i][0];weishu[i][0]=weishu[i+1][0];weishu[i+1][0]=m;
			}
		}
	}
	for(i=0;i<length/2;i++)
		cout<<weishu[i][0]<<" "<<weishu[i][1]<<endl;
	return 0;
}



