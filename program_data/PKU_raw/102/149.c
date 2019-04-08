int main()
{
	int n;
	int fe[40];
	int ma[40];
	float f;
	cin>>n;
	int i;
	char b[10];
	int fec=0,mac=0;
	for(i=0;i<n;i++)
	{
		cin>>b;
		if(strcmp(b,"male")==0)
		{
		//		scanf("%f",&f);
			cin>>f;
			ma[mac]=(int)(f*1000);
			mac++;
		}
		if(strcmp(b,"female")==0)
		{
			scanf("%f",&f);
			//cin>>f;
			fe[fec]=(int)(f*1000);
			fec++;
		}
	}
	sort(ma,ma+mac);
	sort(fe,fe+fec);
	for(i=0;i<mac;i++)
	{
		
		if(ma[i]%10>=4)
			ma[i]++;
		//cout<<ma[i]/100.0<<" ";
		printf("%.2f ",ma[i]/1000.0);
	}
	for(i=fec-1;i>=0;i--)
	{
	
		if(fe[i]%10>=4)
			fe[i]++;
	//	cout<<fe[i]/100.0<<" ";
		if(i>0)
			printf("%.2f ",fe[i]/1000.0);
		if(i==0)
			printf("%.2f",fe[i]/1000.0);
	}
	printf("\n");
	return 0;
}