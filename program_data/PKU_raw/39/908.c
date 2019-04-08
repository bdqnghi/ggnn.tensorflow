struct s
{
	char name[20],ganbu,xibu;
	int qimo,pingyi,lunwen,sum;
};
int main()
{
	int n,i,max=0,tot=0;
	char c;
	struct s a[101],b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i].name);
		c=getchar();
		scanf("%d%d %c %c%d",&a[i].qimo,&a[i].pingyi,&a[i].ganbu,&a[i].xibu,&a[i].lunwen);
		a[i].sum=0;
		if(a[i].qimo>80&&a[i].lunwen>=1)
		a[i].sum+=8000;
		if(a[i].qimo>85&&a[i].pingyi>80)
		a[i].sum+=4000;
		if(a[i].qimo>90)
		a[i].sum+=2000;
		if(a[i].qimo>85&&a[i].xibu=='Y')
		a[i].sum+=1000;
		if(a[i].pingyi>80&&a[i].ganbu=='Y')
		a[i].sum+=850;
		tot+=a[i].sum;
		if(a[i].sum>max)
		{
			max=a[i].sum;
			b=a[i];
		}
	}
	printf("%s\n%d\n%d",b.name,max,tot);
	return 0;
}