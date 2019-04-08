void main()
{
	int i,j,k,m;
	char a[60][30];
	{for (i=0;i<60;i++)
	{	for(j=0;j<30;j++)
	{a[i][j]='\0';}}}
	j=0;
	do {scanf("%s",a[j]);j++;}
	while (getchar()!='\n');
    for (i=0,k=1;k<j;k++)
	{if (strlen(a[i])<strlen(a[k])) i=k;}
	printf("%s\n",a[i]);
	for (m=0,k=1;k<j;k++)
	{if (strlen(a[m])>strlen(a[k])) m=k;}
	puts(a[m]);
}