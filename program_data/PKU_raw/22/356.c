void main()
{
	int i,j,k,n,m,sum=1,a[100]={0};
	char c[1000],t;
	gets(c);
	for(i=0;c[i]!='\0';i++)
		if(c[i]==',')
			sum=sum+1;
	if(sum==1)
	{
		printf("No");
		goto loop;
	}
		i=0;
	for(k=1;k<=sum;k++)
	   {
		for(j=i;c[j]!=','&&c[j]!='\0';j++,i++)
		   a[k]=a[k]*10+c[j]-48;
		i=i+1;
	}
    for(i=1;i<sum;i++)
		for(j=1;j<=sum-i;j++)
			if(a[j+1]>a[j])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
	for(i=1;i<sum;i++)
		if(a[i]!=a[i+1])
		{
			printf("%d",a[i+1]);
			goto loop;
		}
		printf("No");
loop:;
}
		

		   

