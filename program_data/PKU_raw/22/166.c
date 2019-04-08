void main()
{
	int i,j,temp,l=0,a[300];
    do{
		scanf("%d",&a[l]);
		l++;
	}while(getchar()!='\n');
	if (l!=1)
	{
		for (i=0;i<l;i++)
			for (j=0;j<l-i-1;j++)
				if (a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
		if (a[0]==a[l-1])
			printf("No");		
		for (i=l-1;i>=0;i--)
			if (a[i]!=a[l-1])
			{
				printf("%d",a[i]);
				break;
			}
	}
	else 
		printf("No");
}
