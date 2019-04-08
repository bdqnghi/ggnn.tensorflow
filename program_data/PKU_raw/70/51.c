float distance(float x1,float y1,float x2,float y2)
{
	float z;
	z=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	float d;
	d=sqrt(z);
	return d;
}


int main()
{
	int n;
	scanf("%d",&n);

	struct {
		float x,y;
	} zuobiao[100];
	float dist[100][100];
	
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&zuobiao[i].x,&zuobiao[i].y);

	}


	float dis=dist[0][0];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			dist[i][j]=distance(zuobiao[i].x,zuobiao[i].y,zuobiao[j].x,zuobiao[j].y);
			if(dist[i][j]>=dis) dis=dist[i][j];
		}
    }

	

	printf("%.4f\n",dis);
	return 0;
}