double FindFBN( int nplus2,  int* FBNplus2)
{
	int i=0;
	double dSum=0.0;

	FBNplus2[0]=1;
	FBNplus2[1]=1;
	for (i=2; i<nplus2; i++)
	{
		FBNplus2[i]=FBNplus2[i-1]+FBNplus2[i-2];
	}

	for (i=0; i<nplus2-2; i++)
	{
		dSum+=((double)(FBNplus2[i+2])/(double)(FBNplus2[i+1]));
	}
	printf("%.3lf\n",dSum);
	return dSum;
}


int main(int argc, char* argv[])
{
	int m;
	int i;
	int *FBNum ;
	int ** FBArray;
	double dSum;

	scanf("%d",&m);
	FBNum = (int *)malloc(m*sizeof(int));
	FBArray =(int**) malloc(m*sizeof(int*));

	for (i=0; i<m; i++)
	{
		scanf("%d", &FBNum[i]);
	}

	for (i=0; i<m; i++)
	{
		FBArray[i] = (int *) calloc((FBNum[i]+2), sizeof(int));
		dSum = FindFBN(FBNum[i]+2, FBArray[i]);
	}

	return 0;
}
