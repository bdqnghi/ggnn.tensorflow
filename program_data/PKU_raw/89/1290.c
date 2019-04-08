int main()
{
	int i,a,b,n;
	int TRUE=1;
	int left[10000]={0};
	int right[10000]={0};
	scanf("%d",&n);
	while(TRUE)
    {
		scanf("%d%d",&a,&b);
		left[a]++;
		right[b]++;
		if(a==0&&b==0)      break;
	}
    left[0]=left[0]-1;
    right[0]=right[0]-1;
	for(i=0;i<n;i++)
    {
		if(right[i]==n-1&&left[i]==0)
        {
			printf("%d\n",i);
			TRUE=0;
		}
	}
	if(TRUE)   printf("NOT FOUND\n");
	return 0;
}