void main()
{
	int a[10002]={0};
	int n,i,j;
	scanf("%d",&n);
    if(n<5)
		printf("empty");
	else if(n<10001){
	for(i=2;i<sqrt(n);i++)
	    for(j=2*i;j<n+1;j=j+i)
			a[j]=1;
	for(i=2;i<n-1;i++)
		if(a[i]==0&&a[i+2]==0&&i<n-1)
			printf("%d %d\n",i,i+2);
	}
	else
		printf("!");
}

