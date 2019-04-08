int main()
{
	int n;
	float grade=0,point[10];
	cin>>n;
	int j;
	for(j=0;j<n;j++)
	{
		cin>>point[j];
	}
	int i;
	
	int entry,total=0;
	float sum=0;	
	for(i=0;i<n;i++)
	{
		cin>>entry;
		if(entry>=90)
		grade=4.0;
		else if(entry>=85)
		grade=3.7;
		else if(entry>=82)
		grade=3.3;
		else if(entry>=78)
		grade=3.0;
		else if(entry>=75)
		grade=2.7;
		else if(entry>=72)
		grade=2.3;
		else if(entry>=68)
		grade=2.0;
		else if(entry>=64)
		grade=1.5;
		else if(entry>=60)
		grade=1.0;
		else
		grade=0;
		sum+=grade*point[i];
		total+=point[i];
	}
	float average=sum/total;
	cout<<fixed<<setprecision(2)<<average<<endl;
	return 0;
}