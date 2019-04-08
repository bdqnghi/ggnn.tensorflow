void main()
{
	int i=0,j,k;
	int a[300],t;
	char c;
	do
	{
		scanf("%d",&a[i]);
		scanf("%c",&c);
		i++;
	}while(c!='\n');
	for(j=0;j<i-1;j++)
	{
		for(k=0;k<i-j-1;k++)
		{
			if(a[k]<=a[k+1])
			{
				t=a[k];
				a[k]=a[k+1];
				a[k+1]=t;
			}
		}
	}
	for(j=1;j<i;j++)
		{
			if(a[j]<a[0])
			{
				printf("%d",a[j]);
				break;
			}
		}
	if(j>=i) printf("No");
}