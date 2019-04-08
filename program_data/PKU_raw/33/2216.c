int main()
{
	int n;
	scanf("%d",&n);
	char a,b;
	scanf("%c", &a);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;;j++)
		{
			scanf("%c",&a);
			 if(a=='A')
			 {
				 b='T';
				printf("%c",b);
			 }
			 if(a=='T')
			 {
				 b='A';
				printf("%c",b);
			 }
			 if(a=='G')
			 {
				 b='C';
				printf("%c",b);
			 }
			 if(a=='C')
			 {
				 b='G';
				printf("%c",b);
			 }
			 if(a=='\n')
			 {
				 printf("\n");
				 break;
			 }
		}
	}
	return 0;
}