int main()
struct d{
	int x;
	int y;
	int z;};
{
	struct d s[10];
	int n,i,j,k=0,d;
	int x,y,z,b[45],c[45];
	double a[45],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d %d",&s[i].x,&s[i].y,&s[i].z);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{   x=s[i].x-s[j].x;
	        y=s[i].y-s[j].y;
			z=s[i].z-s[j].z;
			a[k]=(x*x+y*y+z*z);
			a[k]=sqrt(a[k]);
			b[k]=i;
			c[k]=j;
	        k++;
	     }
	for(i=0;i<k;i++)
		for(j=i+1;j<k;j++)
		{if((a[i]<a[j])||((a[i]==a[j])&&(b[i]>b[j]))||((a[i]==a[j])&&(c[i]>c[j])))
		{temp=a[j];
	     a[j]=a[i];
		 a[i]=temp;
		 temp=b[j];
	     b[j]=b[i];
		 b[i]=temp;
		 temp=c[j];
	     c[j]=c[i];
		 c[i]=temp;
	    }
		}
	for(i=0;i<k;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",s[b[i]].x,s[b[i]].y,s[b[i]].z,s[c[i]].x,s[c[i]].y,s[c[i]].z,a[i]);
	scanf("%d",&d);
	return 0;
}