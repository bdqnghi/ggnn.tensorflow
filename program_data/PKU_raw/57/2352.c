void main()
{
 	 char str[50][30];
 	 int n,i,j,m,k;
 	 scanf("%d",&n);
 	 for(i=0;i<n;i++)
     {
		 scanf("%s",&str[i]);	 
		 k=strlen(str[i]);
		 if(str[i][k-1]=='g')
		 {
			 for(j=0;j<k-3;j++)
				printf("%c",str[i][j]);
		 }
		if(str[i][k-1]=='y'||str[i][k-1]=='r')
		{
			for(j=0;j<k-2;j++)
				printf("%c",str[i][j]);
		}
		printf("\n");
	 }
}
