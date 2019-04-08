void main()
{
	int i,j,k,n,m,len[100];
	char a[100][19],str[100][10],substr[100][3],max;
	for(i=0;i<100;i++)
		for(j=0;j<19;j++)
			a[i][j]='\0';
	gets(a[0]);
	for(i=1;;i++)
	{
		if(strlen(a[i-1])==0)break;
		else 
		{
			gets(a[i]);
		}
	}
	n=i;
	for(i=0;i<n;i++)
	{
		len[i]=strlen(a[i]);
		a[i][len[i]-4]='\0';
		substr[i][0]=a[i][len[i]-3];
		substr[i][1]=a[i][len[i]-2];
		substr[i][2]=a[i][len[i]-1];
	}

	for(i=0;i<n;i++)
	{
		max=0;
		for(j=0;a[i][j]!='\0';j++)
			max=max>a[i][j]?max:a[i][j];
		for(j=0;a[i][j]!=max;j++)
			printf("%c",a[i][j]);
		printf("%c",max);
		for(k=0;k<3;k++)
			printf("%c",substr[i][k]);
		j++;
		for(;a[i][j]!='\0';j++)
			printf("%c",a[i][j]);
		printf("\n");
	}
}
