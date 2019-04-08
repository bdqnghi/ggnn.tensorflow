
float GPA(int x);
int main()
{
	int i, n, cj[50], jd[50], jdsum=0;
	float sum = 0;
	scanf("%d", &n);

	//????
	for(i=0; i<n; i++)
	{
		scanf("%d", &jd[i]);
	}

	//????
	for(i=0; i<n; i++)
	{
		scanf("%d", &cj[i]);
	}

	//?????????
	for(i=0; i<n; i++)
	{
		sum += GPA(cj[i]) * jd[i];
		jdsum += jd[i];
	}

	//????
	printf("%.2f", sum/jdsum);

	return 0;
}

float GPA(int x)
{
	if(x >= 90 && x <= 100) return 4.0;
	else if(x >= 85 && x <= 89) return 3.7;
	else if(x >= 82 && x <= 84) return 3.3;
	else if(x >= 78 && x <= 81) return 3.0;
	else if(x >= 75 && x <= 77) return 2.7;
	else if(x >= 72 && x <= 74) return 2.3;
	else if(x >= 68 && x <= 71) return 2.0;
	else if(x >= 64 && x <= 67) return 1.5;
	else if(x >= 60 && x <= 63) return 1.0;
	else return 0;
}