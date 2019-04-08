
int compare1( const void *a , const void *b)
{
	int *p = (int *)a;
	int *q = (int *)b;
	if(*p > *q)
	{
		return 1;
	}
	else if(*p == *q)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}//nv

int compare2( const void *a ,  const void *b)
{
	int *p = (int *)a;
	int *q = (int *)b;
	if(*p > *q)
	{
		return -1;
	}
	else if(*p == *q)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}//nan

int main(int argc, char* argv[])
{
	int male = 0;
	int female = 0;
	int n;
	int i;
	float a[40];
	float b[40];
	char c[10];
	float d;
	scanf("%d" , &n);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%s" , c);
		if(!strcmp(c , "male"))
		{
			scanf("%f" , &d);
			a[male] = d;
			male++;
		}
		else
		{
			scanf("%f" , &d);
			b[female] = d;
			female++;
		}		
	}
	//painansheng
	qsort(a , male , sizeof(float) , compare1);
	qsort(b , female , sizeof(float) , compare2);
	for(i = 0 ; i < male ; i++)
	{
		printf("%.2f " , a[i]);
	}
	for(i = 0 ; i < female ; i++)
	{
		printf("%.2f" , b[i]);
		if(i != female-1)
		{
			printf(" ");
		}
	}
	printf("\n");

	return 0;

}