int a[1000],b[1000],c[2000];
int m,n;
int i,j,t;
void read()
{  scanf("%d %d",&m,&n);
   for(i=0;i<m;i++)
	   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
	   scanf("%d",&b[i]);
}
void sort()
{
	for(i=0;i<m;i++)
	   {for(j=i+1;j<m;j++)
	{   if(a[j]<a[i])   {t=a[i];a[i]=a[j];a[j]=t;}}}
for(i=0;i<n;i++)
	   {for(j=i+1;j<n;j++)
	{   if(b[j]<b[i])   {t=b[i];b[i]=b[j];b[j]=t;}}}
}
void cat()
{
	for(i=0;i<m;i++)
		c[i]=a[i];
	for(i=m;i<m+n;i++)
		c[i]=b[i-m];
}
void print()
{for(i=0;i<m+n-1;i++)
printf("%d ",c[i]);
printf("%d",c[m+n-1]);
}

int main()
{
    read();
	sort();
	cat();
	print();

	
}