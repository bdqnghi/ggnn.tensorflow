int main()
{   
	int i,n,j,k=0;
	
	struct  zuobiao
	{
        int x;
		int y;
		int z;
	} a[10];
	struct  juli
	{
		double d;
		struct zuobiao  a1;
		struct zuobiao  b1;
	}    b[100],tem;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].z);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b[k].d=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y)+(a[i].z-a[j].z)*(a[i].z-a[j].z));
			b[k].a1=a[i];
			b[k].b1=a[j];
			k++;
		}
	}
	n=n*(n-1)/2;
	for(i=1;i<n;i++)                     //????
	{
		for(j=i;j>0;j--)
		{
			if(b[j].d>b[j-1].d)  
			{
                  tem=b[j];
				  b[j]=b[j-1];
				  b[j-1]=tem;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	  printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",b[i].a1.x,b[i].a1.y,b[i].a1.z,b[i].b1.x,b[i].b1.y,b[i].b1.z,b[i].d);
	}
	return 0;
}