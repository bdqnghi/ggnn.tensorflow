int main()
{
	int mark[305]={0},str[305],i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",str+i);
	for(i=0;i<n;i++)
		if(*(mark+i)==0)
		{
			k=i;
			for(j=i+1;j<n;j++)
				if(*(str+j)==*(str+i))
					*(mark+j)=1;
		}
	for(i=0;i<k;i++)
		if(*(mark+i)==0)
			printf("%d,",*(str+i));
	printf("%d\n",*(str+k));
	return 0;
}