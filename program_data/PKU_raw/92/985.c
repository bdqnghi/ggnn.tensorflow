void init(); 
void qsort(long int a[],int n);
void rqsort(long int a[],int n);
long int a[1000],b[1000],l[1000][1000];
long int r[1000][1000]; 
int m,j,n;
long int t;

void main() 
{ 
	long int i,j,t=0; 
	for(i=0;i<1000;i++)
	{
		a[i]=0;b[i]=0;
	}
	while(1)
	{
	scanf("%d",&n); 
	if(n==0)break;
	t++;

	for(i=0;i<n;i++) 
	scanf("%d",&b[i]); 
	for(i=0;i<n;i++) 
	scanf("%d",&a[i]); 

    init(); 

	for(i=n-2;i>=0;i--) 
	for(j=1;j<n-i;j++) 
	if(a[i+j]<b[j]) 
	l[i][j]=l[i][j-1]+1; 
	else if(a[i+j]>b[j]) 
	l[i][j]=l[i+1][j-1]-1; 
	else if(l[i+1][j-1]-1>l[i][j-1]) 
	l[i][j]=l[i+1][j-1]-1; 
	else 
	l[i][j]=l[i][j-1]; 

	r[0][t]=l[0][n-1]*200;
	}
	for(i=1;i<=t;i++)
	printf("%ld\n",r[0][i]); 
	} 


void init() 
{ 
int i,j,k; 
//void qsort(long int a[],int n); 
//void rqsort(long int b[],int n); 

for(i=0;i<n-1;i++)
		{
			k=i;
			for(j=i+1;j<n;j++)
				if(a[j]>a[k])
					k=j;
				t=a[k];a[k]=a[i];a[i]=t;
		}


 for(i=0;i<n-1;i++)
		{
			k=i;
			for(j=i+1;j<n;j++)
				if(b[j]>b[k])
					k=j;
				t=b[k];b[k]=b[i];b[i]=t;
		}




for(i=0;i<n;i++) 
{ 
if(a[i]<b[0]) 
l[i][0]=1; 
else if(a[i]==b[0]) 
l[i][0]=0; 
else 
l[i][0]=-1; 
} 
}

void qsort(long int a[],int n)
{

long int t;
int j,i,k;
	    for(i=0;i<n-1;i++)
		{
			k=i;
			for(j=i+1;j<n;j++)
				if(a[j]<a[k])
					k=j;
				t=a[k];a[k]=a[i];a[i]=t;
		}

}

void rqsort(long int b[],int n)
{

long int t;
int j,i,k;
	    for(i=0;i<n-1;i++)
		{
			k=i;
			for(j=i+1;j<n;j++)
				if(a[j]>a[k])
					k=j;
				t=a[k];a[k]=a[i];a[i]=t;
		}

}


