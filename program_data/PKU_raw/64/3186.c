int main()
{
	typedef struct _Point
	{
		int x,y,z;
	} Point;
	typedef struct _Distance
	{
		int first, second;
		float dist;
	} Distance;
	Point point[10];
	int n;
	scanf("%d", &n);
	int i,j,total = n*(n-1)>>1;
	n--;
	for(i=0; i<=n; i++)
		scanf("%d%d%d", &point[i].x, &point[i].y, &point[i].z);
	Distance * pDistance = (Distance *)malloc(total * sizeof(Distance));
	int k = 0;
	for(i=0; i<n; i++)
		for(j=i+1; j<=n; j++)
		{
			pDistance[k].first = i;
			pDistance[k].second = j;
			pDistance[k].dist = sqrt((float)((point[i].x-point[j].x)*(point[i].x-point[j].x) +
				(point[i].y-point[j].y)*(point[i].y-point[j].y) +
				(point[i].z-point[j].z)*(point[i].z-point[j].z)));
			k++;
		}
	for(i=1; i<total; i++)
	{
		int tmp = total - i;
		for(j=0; j<tmp; j++)
			if(pDistance[j].dist < pDistance[j+1].dist)
			{
				Distance tmp = pDistance[j];
				pDistance[j] = pDistance[j+1];
				pDistance[j+1] = tmp;
			}
	}
	for(i=0; i<k; i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", point[pDistance[i].first].x, point[pDistance[i].first].y,
		point[pDistance[i].first].z, point[pDistance[i].second].x, point[pDistance[i].second].y,
		point[pDistance[i].second].z, pDistance[i].dist);
	free(pDistance);
	return 0;
}