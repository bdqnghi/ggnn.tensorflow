

double male[41];
double female[41];
int cmp_male(const void *a,const void *b)
{

	return *(double *)a - *(int *)b;
}
int cmp_female(const void *a,const void *b)
{
	return *(double *)b - *(double *)a;
}

int main()
{
	int n,i,mi=0,fi=0;
	double h;
	char tmp[10];

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %lf",&tmp,&h);
		if(tmp[0] == 'm')
		{
			male[mi] = h ;
			mi++;
		}
		else
		{
			female[fi] = h;
			fi++;
		}
	}
	sort(male,male + mi);
	sort(female,female + fi);
	for(i=0;i<mi;i++)
		printf("%.2lf ",male[i]);
	for(i=fi-1;i>=0;i--)
	{
		if(i==0)
			printf("%.2lf",female[i]);
		else		
			printf("%.2lf ",female[i]);
	}

	printf("\n");
	return 0;
}