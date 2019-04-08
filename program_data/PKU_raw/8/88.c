int m,n,c[50],d[50];
void shuzu()
{
	int i,j;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&c[i]);
	for(j=0;j<n;j++)
		scanf("%d",&d[j]);
}


void paixu(int a[50],int b[50])
{
	int i,j,s,t;
	for(j=0;j<m-1;j++)
		for(i=0;i<m-j-1;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	for(j=0;j<n-1;j++)
		for(i=0;i<n-j-1;i++)
			if(b[i]>b[i+1])
			{
				s=b[i];
				b[i]=b[i+1];
				b[i+1]=s;
			}
}

void hebing(int a[50],int b[50])
{
	
	int i,j;
	int e[100];
	for(i=0;i<m;i++)
		e[i]=a[i];
	for(j=0;j<n;j++)
		e[m+j]=b[j];
	for(i=0;i<m+n-1;i++)
		printf("%d ",e[i]);
	printf("%d",e[m+n-1]);
}

void main()
{
	 shuzu();
	 paixu(c,d);
	 hebing(c,d);
}
