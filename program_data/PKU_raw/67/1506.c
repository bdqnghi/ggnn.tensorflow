
int main()
{   
	float a[1000][3],x,y;
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
	    a[i][2]=a[i][0]/a[i][1];
	}
	x=a[0][1]/a[0][0];
    for(i=1;i<n;i++)
	{
		y=a[i][1]/a[i][0];
		if((x-y)>0.05)
			cout<<"worse"<<endl;
		else if((y-x)>0.05)
			cout<<"better"<<endl;
		else
			cout<<"same"<<endl;

	}
	return 0;
}

