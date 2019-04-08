void main()
{
	int s[5][5],m,n;
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&s[i][j]);
		scanf("%d %d",&m,&n);
			if(m>=5||n>=5)
				printf("error");
			else{
				for(i=0;i<5;i++){
					for(j=0;j<4;j++)
					{
						if(i==m)
							printf("%d ",s[n][j]);
						else if(i==n)
							printf("%d ",s[m][j]);
						else printf("%d ",s[i][j]);
					}
					if(i==m)
						printf("%d",s[n][4]);
					else if(i==n)
						printf("%d",s[m][4]);
					else printf("%d",s[i][4]);
					printf("\n");
				}
			}
}
