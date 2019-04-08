
double mHeight[40];
double fHeight[40];

int comp(const void *a, const void *b)
{
	//return (int)(*(double *)a -*(double *)b);
	if (*(double *)a > *(double *)b)
		return 1;
	else if (*(double *)a < *(double *)b)
		return -1;
	else 
		return 0;
}

int main()
{
	int n;
	int mCount= 0, fCount = 0;
	int i;
	char temp[10];
	double height;
	cin >> n;
	for (i=0; i<n; i++)
	{
		cin >> temp;
		cin >> height;
		if (strcmp(temp, "male") == 0)
		{
			mHeight[mCount++] = height;
		}
		else
			fHeight[fCount++] = height;
	}
	qsort(mHeight, mCount, sizeof(double), comp);
	qsort(fHeight, fCount, sizeof(double), comp);
	
	for (i=0; i<mCount; i++)
		//cout << setprecision(2) << mHeight[i] << " ";
		printf("%0.2f ", mHeight[i] );
	for (i=0; i<fCount-1; i++)
		//cout << setprecision(2) << fHeight[fCount-1-i] << " ";
		printf("%0.2f ", fHeight[fCount-1-i] );
	//cout << setprecision(2) << fHeight[0] << endl;
	printf("%0.2f\n", fHeight[0]);
	
	return 0;
}