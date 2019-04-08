
int a[1000];
int b[1000];
int n;

int mycompare(const void *p1,const void *p2)
{
	int *a1;
	int *a2;

	a1 = (int *)p1;
	a2 = (int *)p2;

	return *a2 - *a1;
}

int main()
{
	int i,j,k1,k2,z;
	int total;
	int num1,num2;
	while (true)
	{
		scanf("%d",&n);
		if (n == 0) break;

		for (i = 0;i < n;i ++)
		{
			scanf("%d",&a[i]);
		}

		for (i = 0;i < n;i ++)
		{
			scanf("%d",&b[i]);
		}

		qsort(a,n,sizeof(int),mycompare);
		qsort(b,n,sizeof(int),mycompare);
		total = 0;
		i = 0; j = 0;
		num1 = n - 1;
		num2 = n - 1;

		while (i <= num1)
		{
			if (a[i] > b[j])
			{
				total = total + 200;
				i ++;
				j ++;
			}
			else
			{
				if (a[i] < b[j])
				{
				    total = total - 200;
					num1 --;
					j ++;
				}
				else
				{
					for (k1 = num1,k2 = num2;k1 > i;k1 --,k2 --)
					{
						if (a[k1] > b[k2]) 
						{
							total = total + 200;
							num1 --;
							num2 --;
						}
						else
						{
							if (a[k1] < b[j]) total = total - 200;
							num1 = k1;
							num2 = k2;
							j ++;
							break;
						}						
					}
					num1 --;
				}


			}
		}
		cout << total << endl;
	}
	return 0;
}


