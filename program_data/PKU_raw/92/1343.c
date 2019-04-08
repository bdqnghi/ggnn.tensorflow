void readdata(); 
void init();
void sort(int a[], int n);
int n,a[1000],b[1000],l[1000][1000]; 
int main() 
{ 
	int i,j;
	while(1)
	{
		readdata(); 
		init(); 
		for(i=n-2;i>=0;i--)
		{ 
			for(j=1;j<n-i;j++)
			{ 
				if(a[i+j]<b[j]) 
					l[i][j]=l[i][j-1]+1; 
				else if(a[i+j]>b[j]) 
					l[i][j]=l[i+1][j-1]-1; 
				else if(l[i+1][j-1]-1>l[i][j-1]) 
					l[i][j]=l[i+1][j-1]-1; 
				else 
					l[i][j]=l[i][j-1];
			}
		} 
		printf("%d\n",l[0][n-1]*200); 
	}
} 

void readdata() 
{ 
	int i; 
	scanf("%d",&n);
	if(n==0)
		exit(0);
	for(i=0;i<n;i++) 
		scanf("%d",&b[i]); 
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]); 
} 

void sort(int a[], int n)
{
	int i, j, temp;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(a[j] < a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}



void init() 
{ 
	int i;
	sort(a, n);
	sort(b, n);
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


