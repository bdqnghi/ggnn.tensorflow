
int array[100][2][2][1000];

int patition(int a[], int low, int high)
{
    int n,temp;
	int i, j;
	n = a[high];
	i = low-1;
	for (j=low; j< high; j++)
    {
        if(a[j]<=n) 
		{
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
    }
    temp=a[i+1];
	a[i+1]=a[high];
	a[high]=temp;
	return i+1;
}
void QuickSort(int a[],int low,int high)
{
	int i;
	if(low<high) 
	{
		i=patition(a,low,high);
		QuickSort(a,low,i-1);
		QuickSort (a,i+1,high); 
	}
}

main()
{
	int n,i,j,k,temp,m,l,o;
    int c[100];
	int finish;
	
	for (i=0;n!=0;i++)
	{
		m =0;
		l =0;
		finish = 0;
        scanf("%d",&n);
		for (j=0;j<n;j++)
		{
			scanf("%d",&temp);
			array[i][0][0][j] = temp;
			array[i][0][1][j] = 0;
			
		}
		QuickSort(array[i][0][0],0,n-1);
		for (j=0;j<n;j++)
		{
			scanf("%d",&temp);
			array[i][1][0][j] = temp;
			array[i][1][1][j] = 0;
			
		}
		QuickSort(array[i][1][0],0,n-1);
		k = n-1;
		while(!finish)
		{
			for (j=0;j<n;j++)
			{
				if (array[i][0][1][j] ==0)
				{
					break;
				}
			}
			for (k=0;k<n;k++)
			{
				if (array[i][1][1][k] ==0)
				{
					break;
				}
			}
			for (l=n-1;l>=0;l--)
			{
				if (array[i][0][1][l] ==0)
				{
					break;
				}
			}
			for (o=n-1;o>=0;o--)
			{
				if (array[i][1][1][o] ==0)
				{
					break;
				}
			}
			if (array[i][0][0][l] > array[i][1][0][o])
			{
				m++;
				array[i][0][1][l] = 1;
				array[i][1][1][o] = 1;
			}
			else
				if (array[i][0][0][j] > array[i][1][0][k])
				{
					m++;
					array[i][0][1][j] = 1;
				    array[i][1][1][k] = 1;
				}
				else
				{
					if(array[i][1][0][o] > array[i][0][0][j] )
					{
						m--;		
					}
					array[i][0][1][j] = 1;
					array[i][1][1][o] = 1;

				}
				finish = 1;
				for (j=0;j<n;j++)
				{
					if (array[i][1][1][j] == 0)
					{
						finish = 0;
					}
				}
		}
// 		for (j=0;j<n;j++)
// 		{
// 			temp = array[i][0][0][j];
// 			for (k=0;k<n;k++)
// 			{
// 				if (temp > array[i][1][0][k] && array[i][1][1][k] == 0 )
// 				{
// 					m++;
// 					break;
// 				}
// 			}
//             array[i][1][1][k] = 1;
// 		}
// 		for (j=n-1;j>0;j--)
// 		{
// 			temp = array[i][0][0][j];
// 			for (k=n-1;k>0;k--)
// 			{
// 				if (temp < array[i][1][0][k] && array[i][1][1][k] == 0 )
// 				{
// 					l++;
// 					break;
// 				}
// 			}
//             array[i][1][1][k] = 1;
// 		}
		c[i] = m*200;
	}
	for (j=0;j<i-1;j++)
	{
		printf("%d\n",c[j]);
	}
}