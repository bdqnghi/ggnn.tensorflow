int main()
{
	int N,fgrade[101],cgrade[101],lunwen[101],jiang[101],max=0,x,sum=0;
	cin>>N;
	cin.get();
	char name[101][20],ganbu[101],xibu[101];
	for(int i=1;i<=N;i++)
	{
		cin>>name[i]>>fgrade[i]>>cgrade[i]>>ganbu[i]>>xibu[i]>>lunwen[i];
        
	}
	for(int i=1;i<=N;i++)
	{
		jiang[i]=(fgrade[i]>80&&lunwen[i]>=1)*8000+(fgrade[i]>85&&cgrade[i]>80)*4000+(fgrade[i]>90)*2000+
			     (fgrade[i]>85&&xibu[i]=='Y')*1000+(cgrade[i]>80&&ganbu[i]=='Y')*850;
		sum=sum+jiang[i];
		if(max<jiang[i])
		{
			max=jiang[i];
		    x=i;
		}
	}
cout<<name[x]<<endl<<jiang[x]<<endl<<sum<<endl;
return 0;
}



