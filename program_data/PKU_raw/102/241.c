//xyx3.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"





int main()
{
	int fnum = 0, mnum = 0;
	int num;
	cin >> num;
	int i, j, k;
	float temp;
    float fe[50], ma[50];
	float height, res[50];
	char xinbie[50][10];
	for(i = 1; i <= num; i++)
	{
		scanf("%s %f", &xinbie[i], &height);
		if(xinbie[i][0] == 'f')
		{
			fnum += 1;
			fe[fnum] = height;
		}
		else
		{
			mnum += 1;
			ma[mnum] = height;
		}
	}


	for(i = fnum; i > 1; i--)
		for(j = 1; j<i; j++)
		{
			if(fe[j] > fe[j+1])
			{
				temp = fe[j];
				fe[j] = fe[j+1];
				fe[j+1] = temp;
			}
		}
	for(i = mnum; i > 1; i--)
		for(j = 1; j<i; j++)
		{
			if(ma[j] > ma[j+1])
			{
				temp = ma[j];
				ma[j] = ma[j+1];
				ma[j+1] = temp;
			}
		}
 
    char out[10];
	for(i = 1; i <= mnum ; i++)
	{
		printf("%.2f ", ma[i]);
	}
	for(i = fnum; i >= 2; i--)
	{
		printf("%.2f ", fe[i]);
	}
	printf("%.2f", fe[1]);
//	cin >> j;
	return 0;
}

