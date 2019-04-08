double male[42]={0};
double female[42]={0};
int m=0;
int f=0;
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		char temp[10];
		double templen;
		scanf("%s",temp);
		scanf("%lf",&templen);
		if(temp[0]=='m')
		{
			male[m]=templen;
			m++;
		}
		else
		{
			female[f]=templen;
			f++;
		}
	}
	sort(male,male+m);
	sort(female,female+f);
	reverse(female,female+f);
	for(i=0;i<m;i++)
	{
		printf("%.2lf ",male[i]);
	}
	for(i=0;i<f-1;i++)
	{
		printf("%.2lf ",female[i]);
	}
	printf("%.2lf\n",female[i]);
	return 0;
}