
void main()
{
int i;
int aa[100],bb[100],cc[200],la,lb;
void scan(int a[],int la,int b[],int lb);
void sort(int a[],int n);
void combine(int a[],int la,int b[],int lb,int c[]);

scanf("%d %d",&la,&lb);

scan(aa,la,bb,lb);
sort(aa,la);
sort(bb,lb);


combine(aa,la,bb,lb,cc);

}

void scan(int a[],int la,int b[],int lb)
{
	int i;
	
	for(i=0;i<la;i++)
		scanf("%d",&a[i]);
	for(i=0;i<lb;i++)
		scanf("%d",&b[i]);

}

void sort(int a[],int n)
{
	int i,j,k,temp;

  for(i=0;i<n-1;i++)
  {
  k=i;
  for(j=i+1;j<n;j++)
   if(a[j]<a[k]) k=j;
  temp=a[k];a[k]=a[i];a[i]=temp;

  }
  
}

void combine(int a[],int la,int b[],int lb,int c[])
{
int i;

for(i=0;i<lb;i++)
  a[la+i]=b[i];
for(i=0;i<la+lb;i++)
c[i]=a[i];
printf("%d",c[0]);
for(i=1;i<la+lb;i++)
printf(" %d",c[i]);
}

