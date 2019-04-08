
int a[1001];	//???????
int b[1001];	//???????

void sort(int a[],int n)
{
	int i,j,temp;
	for(i=n-1;i>0;i--)
		for(j=0;j<i;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
}

int main()
{
	int n,i;
	int win=0,lose=0;
	int maxa,maxb,mina,minb;
	int money;
	scanf("%d",&n);
	while(n!=0)
	{
		win=lose=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);	
		sort(a,n);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);	
		sort(b,n);
		maxa=maxb=n-1;
		mina=minb=0;
		money=0;
		for(i=0;i<n;i++)
		{
			if(a[mina]>b[minb])
			{
				win++;
				mina++;
				minb++;
			}
			else if(a[maxa]>b[maxb])
			{
				win++;
				maxa--;
				maxb--;
			}
			else if(a[mina]==b[maxb])
			{
				mina++;
				maxb--;
			}
			else if(a[mina]<=b[minb])
			{
				lose++;
				mina++;
				maxb--;
			}
		}
		money=200*(win-lose);
		printf("%d\n",money);
		scanf("%d",&n);
	}
	return 0;
}


