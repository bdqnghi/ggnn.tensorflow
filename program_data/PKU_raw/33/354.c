int main()
{
	int n,i,j,num;
	char a[256],b[256];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		gets(a);
		num=strlen(a);
		for(j=0;j<num;j++){
			switch(a[j])
			{
			case'A':b[j]='T';continue;
			case'T':b[j]='A';continue;
			case'C':b[j]='G';continue;
			case'G':b[j]='C';continue;
			}
		}
		for(j=0;j<num;j++){
			printf("%c",b[j]);
		}
		printf("\n");
	}
	return 0;
}