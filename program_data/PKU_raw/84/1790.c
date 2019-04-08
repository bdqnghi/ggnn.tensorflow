void bubbleSort(int A[],int n)
{
	int i,j,t;

	for( i=0; i<n; i++ )
	{   
		for (j = n-1;j>i;j--)
			{
				if (A[j]<A[j-1])
				{

					t=A[j];
					A[j]=A[j-1];
					A[j-1]=t;
		}
		}
	}
}
int main(int argc, char* argv[])
{
	int length;
	int i;
	int A[N];
	scanf("%d", &length);
	for (i=0;i<length;i++)
	{   
		scanf("%d", &A[i]);
	}
	bubbleSort(A,length);

	printf("%d\n",A[length-1]);
	printf("%d\n",A[length-2]);

	
	return 0;
}

