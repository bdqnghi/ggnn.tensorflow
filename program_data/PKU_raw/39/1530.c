
struct Scholarship
{
	char name[20];
	int final;
	int classmate;
	char leader;
	char westerner;
	int paper;
	double sum;
}a[100];

int main()
{
	int n;
	int i,j;
	int count=0;
	double max=0,total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",a[i].name,&a[i].final,&a[i].classmate,&a[i].leader,&a[i].westerner,&a[i].paper);
	}
	for(i=0;i<n;i++)
	{
		a[i].sum=0;
		if(a[i].final>80 && a[i].paper>=1)
			a[i].sum=a[i].sum+8000;
		if(a[i].final>85 && a[i].classmate>80)
			a[i].sum=a[i].sum+4000;
		if(a[i].final>90)
			a[i].sum=a[i].sum+2000;
		if(a[i].final>85 && a[i].westerner=='Y')
			a[i].sum=a[i].sum+1000;
		if(a[i].classmate>80 && a[i].leader=='Y')
			a[i].sum=a[i].sum+850;
		total=total+a[i].sum;
	}
	for(i=0;i<n;i++)
	{
		if(a[i].sum>max)
		{
			max=a[i].sum;
			count=i;
		}
	}
	printf("%s\n",a[count].name);
	printf("%.0lf\n",a[count].sum);
	printf("%.lf\n",total);
	return 0;
}