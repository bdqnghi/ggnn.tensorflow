void main()
{
	char a[1000][100];
	int n,i,j=0,k=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	scanf("%s",a[i]);
		if(strlen(a[i])+1>80-j) {  printf("\n");j=0;k++;  }
		if(j){printf(" ");j++;}
		printf("%s",a[i]);j+=strlen(a[i]);
	}	
}
		
