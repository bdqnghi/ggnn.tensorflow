
int n,a[1010],b[1010],l[1010][1010];

int cmp(const void * elem1,const void * elem2 )
{
	return *((int*)elem2)-*((int*)elem1);
}


int main()
{
	int i,j;

	while(1){
		scanf("%d",&n);
		if(n==0){
			return 0;
		}
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);//tianji
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);//qiwang


		qsort(a,n,sizeof(int),cmp);
		qsort(b,n,sizeof(int),cmp);
		for(i=0;i<n;i++)
		{
			if(a[i]<b[0])
				l[i][0]=1;
			else
				if(a[i]==b[0])
					l[i][0]=0;
				else
					l[i][0]=-1;
		}
		for(i=n-2;i>=0;i--) 
		{
			for(j=1;j<n-i;j++)
			{
				if(a[i+j]<b[j])
					l[i][j]=l[i][j-1]+1;
				else 
				{
					if(a[i+j]>b[j])
						l[i][j]=l[i+1][j-1]-1;
					else
					{
						if(l[i+1][j-1]-1>l[i][j-1])
							l[i][j]=l[i+1][j-1]-1;
						else
							l[i][j]=l[i][j-1];
					}
				}
			}
		}
		printf("%d\n",200*l[0][n-1]);
	}
}
