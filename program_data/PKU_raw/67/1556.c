
int main()
{
	double sum[10001],eff[10001],sum1,eff1;
	double per[10001],std;
	int n;
	int temp;
	int i,j;
		

	
	cin>>n;
	cin>>sum1>>eff1;
	std=eff1/sum1;
		for(i=1;i<=n-1;i++)
		{
			
			
					cin>>sum[i]>>eff[i];
					per[i]=eff[i]/sum[i];
					if(per[i]-std>0.05)
					{
						cout<<"better"<<endl;
					}
					else if(std-per[i]>0.05)
					{
						cout<<"worse"<<endl;
					}
					else
						cout<<"same"<<endl;

		}
			
	


	return 0;
}




