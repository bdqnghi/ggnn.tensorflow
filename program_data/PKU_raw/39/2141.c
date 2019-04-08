struct Student
{
	char name[20];
	int sco;
	int com;
	char cad;
	char prov;
	int num;
};
void count_date(struct Student *p,int *a,int n)
{
	int i,sum;
	for(i=1;i<=n;i++)
	{
		sum=0;
		if((p+i-1)->sco>80&&(p+i-1)->num>=1)
			sum=sum+8000;
		if((p+i-1)->sco>85&&(p+i-1)->com>80)
			sum=sum+4000;
		if((p+i-1)->sco>90)
			sum=sum+2000;
		if((p+i-1)->sco>85&&(p+i-1)->prov=='Y')
			sum=sum+1000;
		if((p+i-1)->com>80&&(p+i-1)->cad=='Y')
			sum=sum+850;
		a[i-1]=sum;
	}
}
int compare_date(int *a,int n)
{
	int i,k,max;
	max=a[0];k=1;
	for(i=2;i<=n;i++)
		if(max<a[i-1])
		{
			max=a[i-1];
			k=i;
		}
	return k;
}
int main()
{
	int n,len,i,*a,top,sum=0;
	struct Student *p;
	scanf("%d",&n);
	len=sizeof(struct Student);
	p=(struct Student *)calloc(len,n);
	a=(int *)calloc(4,n);
	for(i=1;i<=n;i++)
		scanf("%s %d %d %c %c %d",(p+i-1)->name,&(p+i-1)->sco,&(p+i-1)->com,&(p+i-1)->cad,&(p+i-1)->prov,&(p+i-1)->num);
	count_date(p,a,n);
	top=compare_date(a,n);
	for(i=1;i<=n;i++)
		sum=sum+a[i-1];
	printf("%s\n%d\n%d",(p+top-1)->name,a[top-1],sum);
	return 0;
}




