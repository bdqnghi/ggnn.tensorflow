void pro()
{
	int i,a[21]={0},n;
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
		scanf("%d",&a[i]);
	if(a[n]+3*n<60)
		printf("%d\n",60-3*n);
	else if(a[n]+3*n<64)
		printf("%d\n",a[n]);
	else
		for(i=1;i<n+1;i++)
			if(a[i]+3*i>64)
			{
				printf("%d\n",63-3*i);
				break;
			}
			else if(a[i]+3*i>59)
			{
				printf("%d\n",a[i]);
				break;
			}

}
void main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		pro();
}
