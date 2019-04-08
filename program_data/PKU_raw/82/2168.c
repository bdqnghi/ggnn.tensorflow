int main()
{
	int n,pressure[100][2],time[100],j=0,maxtime;
	cin>>n;
	for(int k=0;k<100;k++)
		time[k]=0;
	for(int i=0;i<n;i++)
		{	
			cin>>pressure[i][0]>>pressure[i][1];
			    if((pressure[i][0]>=90)&&(pressure[i][0]<=140)&&(pressure[i][1]<=90)&&(pressure[i][1]>=60))
					time[j]++;
				else
					j++;
	    }
	maxtime=time[0];
	for(int m=0;m<100;m++)
	{
		if(maxtime<time[m])
			maxtime=time[m];
	}       
	cout<<maxtime<<endl;
	return 0;
}
