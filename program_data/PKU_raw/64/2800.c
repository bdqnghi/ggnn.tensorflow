
typedef struct point 
{
	int x,y,z;
}Point;

double Distance(Point p1, Point p2)
{
	double dist=0;
	dist = sqrtf((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) + (p1.z-p2.z)*(p1.z-p2.z)+0.0 );
	return dist;
}
int main(int argc, char* argv[])
{
	int n, i, j, k=0, numtotal, maxpj=0, maxpi=0;
	double ** ppdDist,  dMaxDist=0.0;//*p1Dist,
	Point * pcPoint;


	scanf("%d",&n);
	numtotal = n*(n-1)/2;
	//p1Dist = (double *)calloc(numtotal, sizeof(double));
	ppdDist = (double**)calloc(n, sizeof(double*));
	for (i=0; i<n; i++)
	{
		ppdDist[i] = (double *)calloc(n, sizeof(double));
	}
	pcPoint = (Point *) calloc(n, sizeof(Point));

	for (j=0; j<n; j++)
	{
		for (i=0; i<n; i++)
		{
			ppdDist[j][i] = 0.0;
		}
	}
	//////////////////////////////////////////////////////////////////////////
	for (i=0; i<n; i++)
	{
		scanf("%d%d%d", &(pcPoint[i].x), &(pcPoint[i].y), &(pcPoint[i].z));
	}

	for (j=0; j<n; j++)
	{
		for (i=j+1; i<n; i++)
		{
			ppdDist[j][i] =Distance(pcPoint[j], pcPoint[i]);
		}
	}

	for (k=0; k<numtotal; k++)
	{
		for (j=0; j<n; j++)
		{
			for (i=j+1; i<n; i++)
			{
				if (ppdDist[j][i]>dMaxDist) ///????????????????0
				{
					maxpi = i;
					maxpj = j;
					dMaxDist = ppdDist[j][i];
				}
			}
		}
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", pcPoint[maxpj].x, pcPoint[maxpj].y, pcPoint[maxpj].z, 
			pcPoint[maxpi].x, pcPoint[maxpi].y, pcPoint[maxpi].z, dMaxDist); 

		ppdDist[maxpj][maxpi] =0.0;// is out
		maxpi =0; maxpj =0; dMaxDist =0.0;

	}

	//////////////////////////////////////////////////////////////////////////
	for (i=0; i<n; i++)
	{
		free(ppdDist[i]);
	}
	free(ppdDist);
	free(pcPoint);
	return 0;
}