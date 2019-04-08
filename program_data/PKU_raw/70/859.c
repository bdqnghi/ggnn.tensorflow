
int main()
{
	int n,i,j;
	double a[50][2];
	double b;
	double dis;
	cin>>n;
	cin>>a[0][0]>>a[0][1];
	for(i=1;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
		for(j=0;j<i;j++)
		{
			b=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
			if(b>dis)
				dis=b;

		}
	}
    printf("%.4f\n", dis);
		return 0;
}
	
