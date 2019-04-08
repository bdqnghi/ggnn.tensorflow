
struct stu
{
	char n[20];
	int f;
	int p;
	char g;
	char x;
	int l;
	int m;
};

void main()
{
	struct stu a[100];
	
	int n,i,j,t,sum;
	char c[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s %d %d %c %c %d",&a[i].n,&a[i].f,&a[i].p,&a[i].g,&a[i].x,&a[i].l);}
	for(i=0;i<n;i++)
	{ a[i].m=0;}

	for(i=0;i<n;i++)
	{
		if(a[i].f>80&&a[i].l>=1)	
			a[i].m+=8000;
		if(a[i].f>85&&a[i].p>80)
			a[i].m+=4000;
		if(a[i].f>90)
			a[i].m+=2000;
		if(a[i].f>85&&a[i].x=='Y')
			a[i].m+=1000;
		if(a[i].p>80&&a[i].g=='Y')
			a[i].m+=850;
	}
	sum=0;
	for(i=0;i<n;i++)
	{sum+=a[i].m;}
	for(i=0;i<n;i++)
		for(j=0;j<n-i;j++)
		{
			if(a[j].m<a[j+1].m)
			{t=a[j].m;a[j].m=a[j+1].m;a[j+1].m=t;
			 strcpy(c,a[j].n);
			 strcpy(a[j].n,a[j+1].n);
			 strcpy(a[j+1].n,c);
			}
		}
		printf("%s\n",a[0].n);
		printf("%d\n",a[0].m);
		printf("%d",sum);
}
