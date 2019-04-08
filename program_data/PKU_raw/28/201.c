void main()
{
	int i,j=0,J;
	char c;
	int l[300];
	c=getchar();
	while(c!='\n')
	{
		for(i=0;c!=' ';)
		{
			i++;
			c=getchar();
			if (c=='\n') break;
		}
		l[j]=i;
		if(l[j]==0)
			j--;
		if(c=='\n')
			break;
		else
		{
	        j++;
	  c=getchar();}
	}
	J=j;
	printf("%d",l[0]);
	for(j=1;j<=J;j++)
		printf(",%d",l[j]);


}