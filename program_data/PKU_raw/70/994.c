int main()
{ 
  int n;
  double a[100][2];
  int i,j;
  cin>>n;
  for(i=0;i<n;i++)
	  cin>>a[i][0]>>a[i][1];
  double dis=0;
  for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
		if( sqrt(  (a[i][0]-a[j][0])*(a[i][0]-a[j][0]) + (a[i][1]-a[j][1])*(a[i][1]-a[j][1])  ) >dis  )
			dis=sqrt(  (a[i][0]-a[j][0])*(a[i][0]-a[j][0]) + (a[i][1]-a[j][1])*(a[i][1]-a[j][1])  );
	}
	printf("%.4f\n", dis);
	return 0;
}
