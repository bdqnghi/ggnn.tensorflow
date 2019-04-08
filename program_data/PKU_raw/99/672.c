int main()    //???
{
	int i,a[100];
	double n,x=0,y=0,z=0,w=0;    //????
	cin>>n;     //??
	for(i=0;i<n;i++)
	{
		cin>>a[i];    //?????? 
		if (a[i]<=18&&a[i]>=1)x=x+1; 
		if (a[i]<=35&&a[i]>=19)y=y+1;
		if (a[i]<=60&&a[i]>=36)z=z+1;
		if (a[i]>60)w=w+1;      //??????? 
	}
	x=100*(x/n);
	y=100*(y/n);
	z=100*(z/n);
	w=100*(w/n);     //????? 
	cout<<"1-18: ";
	printf("%.2lf",x);
	cout<<"%"<<endl;
	cout<<"19-35: ";
	printf("%.2lf",y);
	cout<<"%"<<endl;
	cout<<"36-60: ";
	printf("%.2lf",z);
	cout<<"%"<<endl;
	cout<<"60??: ";
	printf("%.2lf",w);
	cout<<"%"<<endl;       //???????? 
	return 0;
}
