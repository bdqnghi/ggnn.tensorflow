
int main()
{
	int zong[1000],hao[1000],n,i;
	float xiaol[1000];
	cin>>n;
	cin>>zong[0]>>hao[0];
	xiaol[0]=(float)hao[0]/zong[0];
	for(i=1;i<n;i++)
	{
		cin>>zong[i]>>hao[i];
		xiaol[i]=(float)hao[i]/zong[i];
	}
	for(i=1;i<n;i++)
	{
		if(xiaol[i]<xiaol[0]-0.05)
			cout<<"worse"<<endl;
		else if(xiaol[i]>xiaol[0]+0.05)
			cout<<"better"<<endl;
		else
			cout<<"same"<<endl;
	}
	return 0;
}

