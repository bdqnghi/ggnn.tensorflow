int main()
{
    int a,k,m,n;
	scanf("%d",&a);
	k=0;
	m=0;
	n=0;
	if ((a%3)==0) k=1;
    if ((a%5)==0) m=1;
	if ((a%7)==0) n=1;
	if ((k+m+n)==3) printf("3 5 7\n");
	if ((k+m+n)==2)
	{
	if ((k==1)&&(m==1)) printf("3 5\n");
	if ((k==1)&&(n==1)) printf("3 7\n");
	if ((m==1)&&(n==1)) printf("5 7\n");
	}
	if ((k+m+n)==1) 
	{
		if (k==1) printf("3\n");
		if (m==1) printf("5\n");
		if (n==1) printf("7\n");
	}
	if ((k+m+n)==0) printf("n\n");
	return 0;
}