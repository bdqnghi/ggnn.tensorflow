//???????????????

int num1,num2,array1[20],array2[20],array[40];

void input(int array1[],int array2[])
{
	int i,j;
	
	scanf("%d %d",&num1,&num2);

	for(i=0;i<=num1-1;i++)
		scanf("%d",&array1[i]);
	for(j=0;j<=num2-1;j++)
		scanf("%d",&array2[j]);
}

void sort(int array[],int n)
{
	int i,j,t;

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(array[j]>array[j+1])//????
			{
				t=array[j];
				array[j]=array[j+1];
				array[j+1]=t;
			}
		}
	}
}

void link(int array1[],int array2[],int array[],int n1,int n2)
{
	int i;

	for(i=0;i<n1;i++)
	{
		array[i]=array1[i];
	}
	for(i=0;i<n2;i++)
	{
		array[i+n1]=array2[i];
	}
}

void output(int array[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d%c",array[i],i<n-1?' ':'\n');
	}
}

void main()
{
 	input(array1,array2);
	sort(array1,num1);
	sort(array2,num2);
	link(array1,array2,array,num1,num2);
	output(array,num1+num2);
}