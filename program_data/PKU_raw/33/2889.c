int main()
{
	int n,i,j;
	char a[256];
	scanf("%d",&n);
	scanf("%c",&a[0]);
	for(i=0;i<n;i++)
	{
		j=0;
		while(j<=255)
		{
			scanf("%c",&a[j]);
			if(a[j]=='A') printf("T");
			else if(a[j]=='T') printf("A");
			else if(a[j]=='C') printf("G");
			else if(a[j]=='G') printf("C");
			else break;
			j=j+1;
		}
		printf("\n");
	}
	return 0;
}