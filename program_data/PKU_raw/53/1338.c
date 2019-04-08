
int main(){
	int a[300],b[300],n,i,j,k=1 ,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    b[0]=a[0];
	for(i=1;i<n;i++)
	{
	    x=0;
		for(j=0;j<k;j++)
		{
			if (a[i]==b[j])
			{
//				printf("%d %d\n",i,j);
				x=1;
			    break;
			}
		}
		if (x==0) 
		{
			b[k]=a[i];
			k++;
		}
//		printf("%d\n",k);
	}
	for(i=0;i<k-1;i++)
	{
		printf("%d,",b[i]);
	}
	printf("%d\n",b[k-1]);
	return 0;
}




