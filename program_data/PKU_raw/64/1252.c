


typedef struct
{
	int x;
	int y;
	int z;
} point3D; //?????????

typedef struct
{
	int firstPointIndex; //???????
	int lastPointIndex; //???????
	float distance;//?????
} result; //???? ??????

float getDistance(point3D p1, point3D p2)
{
	int temp;
	temp = (p1.x - p2.x) * (p1.x - p2.x) +
		   (p1.y - p2.y) * (p1.y - p2.y) +
		   (p1.z - p2.z) * (p1.z - p2.z);
	return sqrtf((float)temp);
}


int main()
{
	point3D points[MAXPOINTS]; //????? ???????
	result results[MAXRESULTS];//??????????????

	int i, j, k, pointNum, resultNum;

	result temp;

	//?????
	scanf("%d", &pointNum);

	resultNum = pointNum * (pointNum - 1) / 2;
	//?????
	for (i = 0; i <  pointNum; i++)
	{
		scanf("%d", &points[i].x);
		scanf("%d", &points[i].y);
		scanf("%d", &points[i].z);
	}
		
	//??????
	k = 0;
	for (i = 0; i < pointNum; i++)
	{
		for (j = i + 1; j < pointNum; j++)
		{
			results[k].firstPointIndex = i;
			results[k].lastPointIndex = j;
			results[k].distance = getDistance(points[i], points[j]);
			k++;
		}
	}
	

	//?????????? ??????
	for (i = 0; i < resultNum - 1; i++)
		for (j = 0; j < resultNum - i - 1; j++)
		{
			if (results[j].distance < results[j + 1].distance )
			{
				temp = results[j];
				results[j] = results[j + 1];
				results[j + 1] = temp;
			}
		}

	//????
	for (i = 0; i < resultNum; i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",
			   points[results[i].firstPointIndex].x,
			   points[results[i].firstPointIndex].y,
			   points[results[i].firstPointIndex].z,
			   points[results[i].lastPointIndex].x,
			   points[results[i].lastPointIndex].y,
			   points[results[i].lastPointIndex].z,
			   results[i].distance);
	}

	return 0;
}