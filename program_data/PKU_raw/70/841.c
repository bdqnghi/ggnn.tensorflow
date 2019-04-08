int main()
{
	int n,i,j;
	cin>>n;
	if(n<2)
		return 0;
	double a[100][2];
	{
	  for(i=0;i<n;i++)
		  for(j=0;j<2;j++)
			  cin>>a[i][j];
		 
	}
	int k;
	double m,temp,dis;
	dis=0;
	for(i=0;i<n-1;i++)
		for(k=i+1;k<n;k++)
		{	m=(a[i][0]-a[k][0])*(a[i][0]-a[k][0])+(a[i][1]-a[k][1])*(a[i][1]-a[k][1]);
            temp=sqrt(m);
			if (dis<temp)
			dis=temp;
		}
    printf("%.4f\n",dis);
	return 0;	
}

