
void sort(int array[],int n)
{
	int i,j,k,t;
	for (i=0;i<n-1;i++)
	{
		k=i;
		for (j=i+1;j<n;j++)
			if(array[j]<array[k])
				k=j;
			t=array[k];
			array[k]=array[i];
			array[i]=t;
	}
}

void add(int array1[],int array2[],int x,int y)
{
	int array[100];
	int i,j;
	for (i=0;i<x;i++)
		array[i]=array1[i];
	for (i=x,j=0;j<y;i++,j++)
		array[i]=array2[j];
	printf("%d",array[0]);
	for (i=1;i<x+y;i++)
		printf(" %d",array[i]);
	
}


void main()
{
	int i,x,y,xarray[50],yarray[50];
	scanf("%d %d",&x,&y);
	for (i=0;i<x;i++)
		scanf("%d",&xarray[i]);
	for (i=0;i<y;i++)
		scanf("%d",&yarray[i]);
	sort (xarray,x);
	sort (yarray,y);
	add (xarray,yarray,x,y);

}

