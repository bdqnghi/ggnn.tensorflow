int main()
{
	int n,i,k,j,sum=0,l=0;
	double di[100],e;
	struct i{
		int x,y,z;
	}a[100],b[100],g,c[100];
   scanf("%d",&n);
      for(i=0;i<n;i++)
             scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].z);
	  for(i=0;i<n;i++)
	  {
		  for(j=i+1;j<n;j++)
		  {
              di[l]=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y)+(a[i].z-a[j].z)*(a[i].z-a[j].z));
                b[l]=a[i];
			    c[l]=a[j];
				l++;
		  }
	  }
for(k=1;k<=l;k++)
{
	for(i=0;i<l-k;i++)
	{
		if(di[i]<di[i+1])
		{
			e=di[i];
			di[i]=di[i+1];
			di[i+1]=e;
			g=b[i];
			b[i]=b[i+1];
			b[i+1]=g;
			g=c[i];
			c[i]=c[i+1];
			c[i+1]=g;
		}
	}
}
for(i=0;i<l;i++)
	printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",b[i].x,b[i].y,b[i].z,c[i].x,c[i].y,c[i].z,di[i]);
	return 0;
}