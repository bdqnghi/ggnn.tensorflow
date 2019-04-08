int tozero(int n);
void delete1(int,int);
void delete2(int,int);
void movea (int);
int a[100][100],sum=0;
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		for(j=0;j<=99;j++)
			for(k=0;k<=99;k++)
				*(*(a+j)+k)=0;
		int r,l,lim=99;
		char c;

		for(r=0;r<n;r++)
			for(l=0;l<n;l++)
		{
			scanf("%d",*(a+r)+l);
			
			
		}
		sum=tozero(r);
		printf("%d\n",sum);
		sum=0;
	}
}
void delete1(int r,int n)
{
	int min=*(*(a+r)+0),j;
	for(j=0;j<n;j++)
		if(*(*(a+r)+j)<min) min=*(*(a+r)+j);
	for(j=0;j<n;j++)
		*(*(a+r)+j)-=min;
}
void delete2(int l,int n)
{
	int min=*(*(a+0)+l),j;
	for(j=0;j<n;j++)
		if(*(*(a+j)+l)<min) min=*(*(a+j)+l);
	for(j=0;j<n;j++)
		*(*(a+j)+l)-=min;
}
void movea(int n)
{
	int i,j,k;
	for(i=1;i<n-1;i++)
		*(*(a+0)+i)=*(*(a+0)+i+1);
	for(i=1;i<n-1;i++)
		*(*(a+i)+0)=*(*(a+i+1)+0);
	for(i=1;i<n-1;i++)
		for(j=2;j<n;j++)
			*(*(a+i)+j)=*(*(a+i+1)+j);
	for(i=1;i<n-1;i++)
		for(j=1;j<n-1;j++)
			*(*(a+j)+i)=*(*(a+j)+i+1);
}


int tozero(int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
		delete1(i,n);
	for(i=0;i<n;i++)
		delete2(i,n);
	sum+=*(*(a+1)+1);
	movea(n);
	if(n>=3) tozero(n-1);
	return sum;
}