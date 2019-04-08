//============================================================================
// Name        : 6.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================


int main() {
	int n=0;
	cin>>n;
	double a[1000],b[1000],c[1000];

	double d[1000];
	for (int j=0;j<n;j++)
	{
		cin>>a[j]>>b[j]>>c[j];
		d[j]=b[j]*b[j]-4*a[j]*c[j];
	}
	for (int i=0;i<n;i++){
        if (d[i]>0)
		{
        	cout<<"x1=";
        	printf("%.5f",(-b[i]+sqrt(d[i]))/(2*a[i]));
        	cout<<";"<<"x2=";printf("%.5f",(-b[i]-sqrt(d[i]))/(2*a[i]));
        	cout<<endl;
        }
        else if (d[i]==0)
		{
			if (b[i]==0)
			{
				cout<<"x1=x2=0.00000";
			}
			else
			{
		    	cout<<"x1=x2=";
		    	printf("%.5f",(-b[i])/(2*a[i]));
		    	cout<<endl;
		    }
		}
        else
		{
			if (b[i]==0)
				{cout<<"x1=0.00000+";printf("%.5f",sqrt(c[i]/a[i]));cout<<"i;x2=0.00000";printf("%.5f",-sqrt(c[i]/a[i]));cout<<"i"<<endl;}
		    if (b[i]!=0)
			{cout<<"x1=";printf("%.5f",(-b[i])/(2*a[i]));cout<<"+";printf("%.5f",(sqrt(-d[i]))/(2*a[i]));cout<<"i"<<";"<<"x2=";printf("%.5f",(-b[i])/(2*a[i]));cout<<"-";printf("%.5f",(sqrt(-d[i]))/(2*a[i]));cout<<"i"<<endl;}
				}}
	return 0;
}
