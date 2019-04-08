


int a[50];
int b[50];
int c[100];
int m=0,n=0,temp;
void IN();
void OR();
void LIAN();
void OU();
void main()
{
  IN();
  OR();
  LIAN();
  OU();
}

void IN()
{
	int i;
 scanf("%d%d",&m,&n);
 for(i=0;i<m;i++)scanf("%d",&a[i]);
 for(i=0;i<n;i++)scanf("%d",&b[i]);
}
void OR()
{
	int i,j;
 for(i=0;i<m-1;i++)
	 for(j=0;j<m-1-i;j++)
	 {
		 if(a[j]>a[j+1])
		 {
		   temp=a[j];
		   a[j]=a[j+1];
		   a[j+1]=temp;
		 }
 }
 for(i=0;i<n-1;i++)
	  for(j=0;j<n-1-i;j++)
	  {
		 if(b[j]>b[j+1])
		 {
		   temp=b[j];
		   b[j]=b[j+1];
		   b[j+1]=temp;
		 }
      }
}

void LIAN()
{
	int i;
	for(i=m;i<m+n;i++)c[i]=b[i-m]; 
	for(i=0;i<m;i++)c[i]=a[i]; 
}


void OU()
{
	int i;
	for(i=0;i<m+n-1;i++) printf("%d ",c[i]);
	printf("%d",c[m+n-1]);
}