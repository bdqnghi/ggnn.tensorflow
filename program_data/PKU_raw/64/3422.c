
struct point
{
	int x;
	int y;
	int z;
};

struct dist
{
	struct point *p1;
	struct point *p2;
	double l;
};

void sort(struct dist a[], int n)
{
	int i,j;
	struct dist t;
	for(i=0;i<n-1;i++)
		for(j=n;j>i;j--)
			if(a[j].l>a[j-1].l)
			{
				t=a[j];a[j]=a[j-1];a[j-1]=t;
			}
}

void main()
{
	struct point p[10];
	struct dist d[50];
	int n,i,j,c=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&p[i].x,&p[i].y,&p[i].z);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			d[c].p1=&p[i];
			d[c].p2=&p[j];
			d[c].l=sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y)+(p[i].z-p[j].z)*(p[i].z-p[j].z));
			c++;
		}
	sort(d,c);
	for(i=0;i<c;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",d[i].p1->x,d[i].p1->y,d[i].p1->z,d[i].p2->x,d[i].p2->y,d[i].p2->z,d[i].l);
}
