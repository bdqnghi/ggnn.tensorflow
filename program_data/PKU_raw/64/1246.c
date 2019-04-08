struct point
{
	int x[3];
}pt[10];
struct str
{
	struct point po[2];
	float distance;
}dis[50], temp;
void main()
{
	int n, i, j, num;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		for(j=0; j<=2; j++)
			scanf("%d",&pt[i].x[j]);
	}
	//??????
	for(i=0; i<50; i++)
		dis[i].distance=0.0;
	for(i=0, num=0; i<n-1; i++)//????
	{
		for(j=i+1; j<n; j++)
		{
			dis[num].po[0]=pt[i];
			dis[num].po[1]=pt[j];
			dis[num].distance=sqrt( abs(pt[i].x[0]-pt[j].x[0])*abs(pt[i].x[0]-pt[j].x[0])+abs(pt[i].x[1]-pt[j].x[1])*abs(pt[i].x[1]-pt[j].x[1])+abs(pt[i].x[2]-pt[j].x[2])*abs(pt[i].x[2]-pt[j].x[2]) );
			num++;
		}
	}

	for(num=0, i=0; dis[i].distance>0.01; i++)//?num????????
	{
		num++;
	}
	for(j=1; j<num ; j++)	//????
	{
		for(i=0; i<num-j; i++)
		{
			if( (dis[i+1].distance-dis[i].distance)>0.01 )
			{
				temp=dis[i];
				dis[i]=dis[i+1];
				dis[i+1]=temp;
			}
		}
	}
	for(i=0; i<num; i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",dis[i].po[0].x[0],dis[i].po[0].x[1],dis[i].po[0].x[2],dis[i].po[1].x[0],dis[i].po[1].x[1],dis[i].po[1].x[2],dis[i].distance);
}