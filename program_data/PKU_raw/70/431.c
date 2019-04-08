int main()
{
	int n=0,k=0,i,j;
	cin>>n;
	double a[100][2]={0},d[1000]={0};
	float max=0;
	for(i=0;i<n;i++)
	 cin>>a[i][0]>>a[i][1];
	for(i=0;i<n;i++)
	{	
		for(j=i+1;j<n;j++)
		{
		  d[k]=sqrt(pow(a[j][0]-a[i][0],2)+pow(a[j][1]-a[i][1],2));
		  if(max<d[k])    max=d[k];
		  k++;
		}
	}
   printf("%.4f\n", max);
   return 0;
}