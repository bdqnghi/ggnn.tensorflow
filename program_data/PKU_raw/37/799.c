int main()
{
	char a[999999],b[26]={'\0'};
	int t,i,j,k,sum[26]={0},pp=0,qq=0,num=0;
	cin >>t;
	cin.get();
	for (k=1;k<=t;k++)
	{
		cin.getline(a,999999);
		b[0]=a[0];
		sum[0]=1;
		for (i=1;a[i]!='\0';i++)
		{
			for (j=0;j<26;j++)
			{
				if (a[i]==b[j])
				{
					sum[j]++;
					pp++;
				}
			}
			if (pp==0) 
			{
				num++;
				b[num]=a[i];
				sum[num]=1;
			}
			pp=0;
		}
		for (j=0;j<26;j++)
		{
			if (sum[j]==1&&qq==0)
			{
				cout <<b[j]<<endl;
				qq++;
			}
		}
		if (qq==0) cout <<"no"<<endl;

	//	cout <<num<<" "<<sum[0]<<sum[1]<<sum[2]<<" "<<b[0]<<b[1]<<b[2];
		
		pp=0;qq=0;num=0;
		for (j=0;j<26;j++) {sum[j]=0;b[j]='\0';}
		for (j=0;j<=999990;j++) a[j]='\0';
		
	}
	
	
	return 0;
}
