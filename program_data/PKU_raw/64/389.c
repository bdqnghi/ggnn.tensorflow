
struct dist
{
	int i;
	int j;
	float d;
}d[45];//??i?j?????

struct node
{
	int x;
	int y;
	int z;
}a[10];//????????

void main()
{
	int n,i,j,count=0;
	struct dist temp;//????????
	scanf("%d",&n);
	for(i=0;i<45;i++) d[i].d=0.0;//????
	for(i=0;i<n;i++)
		scanf("%d %d %d",&a[i].x,&a[i].y,&a[i].z);//???
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			d[count].i=i;
			d[count].j=j;
			d[count].d=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y)+(a[i].z-a[j].z)*(a[i].z-a[j].z));
			count++;
		}//??i?j?????
	count=n*(n-1)/2;
	for(i=0;i<count-1;i++)
		for(j=0;j<count-i-1;j++)
		{
			if(d[j].d<d[j+1].d)
			{
				temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
			}
		}//????
	for(i=0;i<count;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[d[i].i].x,a[d[i].i].y,a[d[i].i].z,a[d[i].j].x,a[d[i].j].y,a[d[i].j].z,d[i].d);
}

