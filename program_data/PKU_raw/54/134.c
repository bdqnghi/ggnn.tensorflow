void main()
{
	int n,k,apple,a,i,p;
	scanf("%d %d",&n,&k);
	for(a=1;;a++)
	{   p=0;
		apple=a*n+k;
	     for(i=1;i<=n-1;i++)
	     {
		    if(apple%(n-1)) break;
			else {apple=apple*n/(n-1)+k;p++;}
		 }
		 if(p==n-1) break;
	}
	printf("%d",apple);
	getchar();
	getchar();
}
