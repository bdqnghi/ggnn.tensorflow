void main()
{
	float x[100][2];
	float s[1000],max=0;
	int i,j,m,n,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f%f",&x[i][0],&x[i][1]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(i==j)continue;
			else
			{
				s[k]=(x[i][0]-x[j][0])*(x[i][0]-x[j][0])+(x[i][1]-x[j][1])*(x[i][1]-x[j][1]);
				k++;
			}
		}
	for(i=0;i<(n-1)*(n-1);i++)
		max=max>s[i]?max:s[i];
	max=pow(max,0.5);
	printf("%.4f",max);
}