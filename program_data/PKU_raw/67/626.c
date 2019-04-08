int main()
{
	int n,i;double a[100][2],b[100];
	cin>>n;
	for(i=0;i<n;i++)
	{cin>>a[i][0]>>a[i][1],b[i]=a[i][1]/a[i][0];}
	for(i=1;i<n;i++)
	    {if((b[i]-b[0])>0.05)
	        cout<<"better"<<endl;
		else if((b[i]-b[0])<-0.05)
	         cout<<"worse"<<endl;
		else cout<<"same"<<endl;}

}