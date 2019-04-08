struct zuobiao
{
	int x,y,z;
}zuo[10];
struct dis
{
	int left[3],right[3];
	float d;
}di[100],e;
int main()
{
	int l,n,ld,i,j;
	scanf("%d",&n);
	l=n*(n-1)/2;
	ld=0;
	for(i=0;i<n;i++)
		scanf("%d%d%d",&zuo[i].x,&zuo[i].y,&zuo[i].z);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			di[ld++].d=sqrt(pow(zuo[i].x-zuo[j].x,2)+pow(zuo[i].y-zuo[j].y,2)+pow(zuo[i].z-zuo[j].z,2));
			di[ld-1].left[0]=zuo[i].x;
			di[ld-1].left[1]=zuo[i].y;
			di[ld-1].left[2]=zuo[i].z;
			di[ld-1].right[0]=zuo[j].x;
			di[ld-1].right[1]=zuo[j].y;
			di[ld-1].right[2]=zuo[j].z;
		}
		for(i=1;i<l;i++)
			for(j=0;j<l-i;j++)
				if(di[j].d<di[j+1].d)
				{
					e=di[j];
					di[j]=di[j+1];
					di[j+1]=e;
				}
				for(i=0;i<l;i++)
					printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",di[i].left[0],di[i].left[1],di[i].left[2],di[i].right[0],di[i].right[1],di[i].right[2],di[i].d);
				
				
				
				
				
				
				return 0;
}
