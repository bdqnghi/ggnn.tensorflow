int main()
{
	int n,i,t;
	char a[260];
	scanf("%d",&n);
	scanf("%c",&a[0]);
	i=1;
	while(i<=n)
	{
		t=0;
		do
		{
		    scanf("%c",&a[t]);
		    if(a[t]=='A')
			{
		    	printf("T");
			}
		    else if(a[t]=='G')
			{
			    printf("C");
			}
		    else if(a[t]=='T')
			{
			    printf("A");
			}
		    else if(a[t]=='C')
			{
			    printf("G");
			}
	    	t=t+1;
		}while(a[t-1]!='\n');
		printf("\n");
		i=i+1;
	}
	return 0;
}
