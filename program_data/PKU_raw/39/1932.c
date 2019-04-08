int main()
{
	int a,b,e,n,i,max=0,total=0,sum[200];
	char s[200][200],maxstudent[200],c,d;
	cin>>n;
	for(i=0;i<n;i++)
	{
		sum[i]=0;
		cin>>s[i]>>a>>b>>c>>d>>e;
		if((a>80)&&(e>0))
			sum[i]+=8000;
		if((a>85)&&(b>80))
			sum[i]+=4000;
		if((a>90))
			sum[i]+=2000;
		if((a>85)&&(d=='Y'))
			sum[i]+=1000;
		if((b>80)&&(c=='Y'))
			sum[i]+=850;
	}
	for(i=0;i<n;i++)
	{
		total+=sum[i];
		if(sum[i]>max)
			{
			max=sum[i];
		    strcpy(maxstudent,s[i]);
			}

	}
	cout<<maxstudent<<"\n"<<max<<"\n"<<total<<endl;
			return 0;
}