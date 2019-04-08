int main()
{
	int n,i;
	int a[110];
	int *t=a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",t++);   //?????
    //??????
	for(i=0;i<n/2;i++)
	{
		*t=*(a+i);
		*(a+i)=*(a+n-1-i);    //?????
		*(a+n-1-i)=*t;
	}
	printf("%d",*a);        //?????
	for(i=1;i<n;i++)
		printf(" %d",*(a+i));
	return 0;
}