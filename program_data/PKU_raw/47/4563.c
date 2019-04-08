int main()
{
	void inv(int array[ ],int k);
	int i,n,a[100],*p;
	scanf("%d",&n);
	for(p=a;p<a+n;p++)
		scanf("%d",p);
	inv(a,n);
	printf("%d",*a);
	for(p=a+1;p<a+n;p++)
        printf(" %d",*p);
}

    void inv(int array[ ],int k)
	{
		int temp,j,m;
        m=k/2;
		for(j=0;j<m;j++)
		{
			temp=*(array+k-j-1);
			*(array+k-j-1)=*(array+j);
			*(array+j)=temp;
		}
		return;
	}