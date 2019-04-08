int main()
{
	int i,n;
	cin>>n;
	float a[100],b[100];
	for(i=0;i<=(n-1);i++)
	{
		cin>>a[i]>>b[i];
	}
    for(i=1;i<=(n-1);i++)
	{
		if(fabs((b[i]/a[i])-(b[0]/a[0]))<=5*(1e-2))
		{
			cout<<"same"<<endl;
		}
		else if(((b[i]/a[i])-(b[0]/a[0]))>5*(1e-2))
		{
			cout<<"better"<<endl;
		}
		else
		{
			cout<<"worse"<<endl;
		}
	}
return 0;
}	
			
			
		