int main()
{
	int n=0;//?????
	cin>>n;
	int a=0;//????????
	float s[4]={0,0,0,0};//???????
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a<19)
			s[0]=s[0]+1;
		else if(a>18&&a<36)
			s[1]=s[1]+1;
		else if(a>35&&a<61)
			s[2]=s[2]+1;
		else
			s[3]=s[3]+1;
	}
	double c[4]={0.0,0.0,0.0,0.0};//???????
	c[0]=s[0]*100/n;
	c[1]=s[1]*100/n;
	c[2]=s[2]*100/n;
	c[3]=s[3]*100/n;
	cout<<"1-18: ";
	printf("%.2f",c[0]);
	cout<<"%"<<endl;
	cout<<"19-35: ";
	printf("%.2f",c[1]);
	cout<<"%"<<endl;
	cout<<"36-60: ";
	printf("%.2f",c[2]);
	cout<<"%"<<endl;
	cout<<"60??: ";
	printf("%.2f",c[3]);
	cout<<"%"<<endl;
	return 0;
}
