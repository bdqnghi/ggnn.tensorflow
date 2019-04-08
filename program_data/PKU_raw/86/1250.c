int main()
{
	int n,i,j,m,k[100]={0},count=0,tt;
	cin>>n;
	for(i=0;i<n;i++)
	{
		count=0;
		cin>>m;
		for(j=0;j<m;j++)
		{
			cin>>k[j];
		}
		if(m==0)
			tt=60;
		else if(k[j-1]+3*j<=60)
		{
		tt=60-j*3;	
		}
		else if(k[0]>=60)
			tt=60;
		else
		{
			for(j=0;j<m;j++)
			{
				if(k[j]+3*(j+1)>=60 && k[j]+3*j<=60)
				{
					tt=k[j];
					break;
				}
				else if(k[j]+3*(j+1)<60 && k[j+1]+3*(j+1)>60)
				{
					tt=60-3*(j+1);
					break;
				}
			}
		}
		cout<<tt<<endl;
	}
	return 0;
}





