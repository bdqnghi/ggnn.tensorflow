void main()
{
	int n,k,i,j,*pt,flag=1;
	scanf("%d%d",&n,&k);
	pt=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		scanf("%d",pt+i);
	for(i=0;i<n-1;i++)
		if(flag)
		for(j=i+1;j<n;j++)
			if((pt[i]+pt[j])==k)
			{
				flag=0;
				break;
			}
			if(flag)
				printf("no\n");
			else
				printf("yes\n");
			free(pt);
}
