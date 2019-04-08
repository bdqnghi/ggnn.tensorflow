int main()
{
	int N,i,j;
	int b[100]={1,0},jin[100]={0},liu[100]={0};
	cin>>N;
	if(N==0)
		cout<<'1'<<endl;//0???1
	else{
		for(i=0;i<N;i++)//??? N ?2
		{
			for(j=0;j<100;j++)
				b[j]=b[j]*2;
			for(j=0;j<100;j++)
				if(b[j]>=10)
				{
					b[j+1]=b[j+1]+b[j]/10;
					b[j]=b[j]%10;
				}
		}
		for(i=99;i>=0;i--)
			if(b[i]!=0)break;
		for(j=i;j>=0;j--)//??
			cout<<b[j];
	}
	return 0;
}