int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	struct point{
		double x,y;
	};
	struct point *pp;
	pp=(struct point*)malloc(sizeof(point)*n);
	int i,j;
	double temp=0;
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&((pp+i)->x),&((pp+i)->y));
	}
    for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(temp<(((pp+i)->x)-((pp+j)->x))*(((pp+i)->x)-((pp+j)->x))+(((pp+i)->y)-((pp+j)->y))*(((pp+i)->y)-((pp+j)->y)))
			{
				temp=(((pp+i)->x)-((pp+j)->x))*(((pp+i)->x)-((pp+j)->x))+(((pp+i)->y)-((pp+j)->y))*(((pp+i)->y)-((pp+j)->y));
			}
		}
	}
	printf("%.4f\n",sqrt(temp));
	return 0;
}