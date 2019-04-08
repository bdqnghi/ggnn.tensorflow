int main()
{
	int n,i,j=0,k=0,len,sum=0;
	double di[100],l;
	struct i{
		int x,y,z;
	}a[100],b[100],c[100],e;
	scanf("%d",&n);
	for(i=0;i<n;i++)	
		scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].z);
      for(i=0;i<n;i++)
	  {
        for(j=i+1;j<n;j++)
		{
			di[k]=sqrt(1.0*(a[i].x-a[j].x)*(a[i].x-a[j].x)+1.0*(a[i].y-a[j].y)*(a[i].y-a[j].y)+1.0*(a[i].z-a[j].z)*(a[i].z-a[j].z));
             b[k]=a[i];
			 c[k]=a[j];
			 k++;
		}
	  }
	  for(i=1;i<=k;i++)
	  {
		  for(j=0;j<k-i;j++)
		  {
			  if(di[j]<di[j+1])
			  {
				  l=di[j];
				  di[j]=di[j+1];
				  di[j+1]=l;
                   e=b[j];
				  b[j]=b[j+1];
				  b[j+1]=e;
				  e=c[j];
				  c[j]=c[j+1];
				  c[j+1]=e;
			  }
		  }
	  }
	  for(i=0;i<k;i++)
	  {
		  printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",b[i].x,b[i].y,b[i].z,c[i].x,c[i].y,c[i].z,di[i]);
	  }
	return 0;
}