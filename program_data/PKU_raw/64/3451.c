//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main() {
	int n;
	cin>>n;
	int x[n],y[n],z[n];                         //x[n],y[n],z[n]?????????
	int f=n*(n-1)/2;                            //f??????
	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i]>>z[i];
	int a1[f],b1[f],c1[f],a2[f],b2[f],c2[f];
	float e[f];
	int d=0;
	int num[f];
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			a1[d]=x[i];                          //????????
			b1[d]=y[i];
			c1[d]=z[i];
			a2[d]=x[j];
			b2[d]=y[j];
			c2[d]=z[j];
			e[d]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
			num[d]=d;
			d++;                                 //e[f]???????
		}
	int m=0;                                     //m,n1????????????
	float n1=0;
	for(int i=0;i<f;i++)
		for(int j=i+1;j<f;j++)
		{
			if(e[i]<e[j])
			{
				n1=e[i];e[i]=e[j];e[j]=n1;
				m=a1[i];a1[i]=a1[j];a1[j]=m;
				m=b1[i];b1[i]=b1[j];b1[j]=m;
				m=c1[i];c1[i]=c1[j];c1[j]=m;
				m=a2[i];a2[i]=a2[j];a2[j]=m;
				m=b2[i];b2[i]=b2[j];b2[j]=m;
				m=c2[i];c2[i]=c2[j];c2[j]=m;
				m=num[i];num[i]=num[j];num[j]=m;
			}
			if((e[i]==e[j])&&(num[i]>num[j]))    //????????????
		    {
				n1=e[i];e[i]=e[j];e[j]=n1;
			    m=a1[i];a1[i]=a1[j];a1[j]=m;
				m=b1[i];b1[i]=b1[j];b1[j]=m;
				m=c1[i];c1[i]=c1[j];c1[j]=m;
				m=a2[i];a2[i]=a2[j];a2[j]=m;
				m=b2[i];b2[i]=b2[j];b2[j]=m;
				m=c2[i];c2[i]=c2[j];c2[j]=m;
				m=num[i];num[i]=num[j];num[j]=m;
		    }
		}
	for(int i=0;i<f;i++)
		cout<<"("<<a1[i]<<","<<b1[i]<<","<<c1[i]<<")-("<<a2[i]<<","<<b2[i]<<","<<c2[i]<<")="<<fixed<<setprecision(2)<<e[i]<<endl;
	return 0;
}