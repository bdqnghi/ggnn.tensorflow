int main ()
{
	int n ;
	scanf("%d",&n);
	float x[10000][2];
	int i,j;
	float dis=0;
    float b;
	for (i=0;i<n;i++)
	{
		scanf("%f%f",&x[i][0],&x[i][1]);
	}
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			b=(float)sqrt((x[i][0]-x[j][0])*(x[i][0]-x[j][0])+(x[i][1]-x[j][1])*(x[i][1]-x[j][1]));
			if (b>=dis)
			{
				dis=b;
			}
			else
			{
				dis=dis;
			}
		}
	printf("%.4f\n",dis);
	return 0;
}
