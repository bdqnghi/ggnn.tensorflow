//Hungary Algorithm

int a[1010];
int b[1010];
int n;
int money;

void sort(int* array,int n)
{
	int i=0;
	int j=0;
	int t;
	int *p;
	for(i=0;i<n-1;i++)
	{
		for(p=array;p<array+n-1-i;p++)
		{
			if(*p<*(p+1))
			{
				t = *p;
				*p = *(p+1);
				*(p+1) = t;
			}
		}
	}
}

int input()
{
	
	int i;
	scanf("%d",&n);
	if(n==0)
	{
		return 0;
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	sort(a,n);
	sort(b,n);
	money = 0;
	return 1;
}

void main()
{
	while(input())
	{
		int i=0;
		int j=0;
		int backi = n-1;
		int backj = n-1;
		while(j<n&&i<=backi)
		{
			if(b[j]<a[i])
			{
				money+=200;
				i++;
				j++;
			}
			else if(b[j] == a[i])
			{
				int x;
				int y;
				for(x = backi,y = backj;x>=i;x--,y--)
				{
					if(a[x]>b[y])
					{
						money+=200;
						backi--;
						backj--;
					}
					else
					{
						if(a[x]<b[j])
						{
							money-=200;
						}
						x--;
						backi = x;
						backj = y;
						break;
					} 
				}
				j++;
			}
			else 
			{
				j++;
				money-=200;
				backi--;
			}
		}
		printf("%d\n",money);
	}
}
	
