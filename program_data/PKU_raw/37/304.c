int main()
{
	int i,j,k,n,x;
	char c[100][10000];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(c[i]);
		for(j=0;c[i][j]!='\0';j++)
		{
		    x=0;
			for(k=0;c[i][k]!='\0';k++)
			if(c[i][j]==c[i][k]) x++;
		
		if(x==1) 
        {
        	printf("%c\n",c[i][j]);
        	break;}
        }
        if(x>1) printf("no\n");
	}
}