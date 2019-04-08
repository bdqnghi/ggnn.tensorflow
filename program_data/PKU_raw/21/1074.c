int num[310];
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i];
		sum=sum+num[i];
	}

	double ave=sum/(n*1.0);
	double away[310];

	int use;

    for(int i=1;i<=n;i++)
		away[i]=abs(num[i]*1.0-ave);

	double use2;
	for(int i=1;i<=n-1;i++)
		for(int j=1;j<=n-i;j++)
			if(away[j]<away[j+1])
			{ use2=away[j];away[j]=away[j+1];away[j+1]=use2; 
	          use=num[j];num[j]=num[j+1];num[j+1]=use;
	       }

    int m;
	for(int i=1;i<=n;i++)
		if(away[i+1]!=away[i])
		  {m=i;break;}

	for(int i=1;i<=m-1;i++)
		for(int j=1;j<=m-i;j++)
			if(num[j]>num[j+1])
			{ use=num[j];num[j]=num[j+1];num[j+1]=use; }

	for(int i=1;i<=m-1;i++)
		cout<<num[i]<<",";
	cout<<num[m];


	return 0;
}

