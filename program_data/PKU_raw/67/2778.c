int main()
{
	int n;
	float standard[2],std;
	float a[100][2],other;
	cin>>n;
	cin>>standard[0]>>standard[1];
	std=standard[1]/standard[0];
	for(int i=0;i<n-1;i++)
	{
		cin>>a[i][0]>>a[i][1];
		other=a[i][1]/a[i][0];
		if(other-std>0.05)cout<<"better"<<endl;
		else if(std-other>0.05)cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
}