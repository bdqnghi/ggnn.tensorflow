int main()
{
	int geshu;
	cin>>geshu;
	int i,j,xh;
	double a[11][4]={0};
	double b[11][11]={0};
	for(i=1;i<=geshu;i++)cin>>a[i][1]>>a[i][2]>>a[i][3];
	for(i=1;i<geshu;i++)
	{
		for(j=i+1;j<=geshu;j++)
		{
			double m;
			m=(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2])+(a[i][3]-a[j][3])*(a[i][3]-a[j][3]);
			b[i][j]=sqrt(m);
		}
	}
	int jiayou;
	jiayou=geshu*(geshu-1)/2;
	for(xh=jiayou;xh>=1;xh--)
	{

	  for(i=1;i<geshu;i++)//??????b????????,????.?????????????,????t???,T??n*(n-1)/2???????
	  {
		for(j=i+1;j<=geshu;j++)//??????b[i][j],?????t??xh
		{
			int p,q,t;
			t=0;
			for(p=1;p<geshu;p++)
			{
				for(q=p+1;q<=geshu;q++)
				{
					if(b[i][j]>=b[p][q])t++;
				}
			}
			if(t==xh)
			{
				cout<<"("<<a[i][1]<<","<<a[i][2]<<","<<a[i][3]<<")-("<<a[j][1]<<","<<a[j][2]<<","<<a[j][3]<<")=";			
				printf("%0.2f",b[i][j]);
				cout<<endl;
			}


						
		}
	  }
	}



	return 0;
}
