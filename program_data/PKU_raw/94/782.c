
int main()

{
	int n,i,j;
	int a[500]={0};
	int b[500]={0};
	void bubble(int a[],int n);
	
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	bubble(a,n);
	

	for(i=0,j=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			b[j]=a[i];
			j++;
		}
	}
    for(i=0;i<j-1;i++)
	{
	  printf("%d,",b[i]);
	}
	printf("%d",b[j-1]);

	return 0;

}


void bubble(int a[500],int n)//n?????????
{
	int i,temp,j;
	for(j=1;j<n;j++)//???size-1?n-1???????10??????9???
	{
		for(i=0;i<n-j;i++)//?????9-j???
		{
			if(a[i]>a[i+1])//?????????????????
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}
