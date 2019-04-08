
void main()
{
    char str[100][50];
    int a[100][2],b[100],c[100];
    int i,j,k=-1;
	for(i=0;i<100;i++)
	{c[i]=b[i]=0;}
	for(i=0;i<100;i++)
	{gets(str[i]);
	k=k+1;
	if (str[i][0]=='\0') break;}
	for(i=0;i<k;i++)
	{c[i]=strlen(str[i]);
	for(j=0;j<c[i];j++)
	if(str[i][j]==' ')  b[i]=j;}
    
	for (i=0;i<k;i++) 
	{a[i][1]=str[i][0];
	a[i][0]=0;}
	for (i=0;i<k;i++)
	for(j=0;j<b[i];j++)
	if (str[i][j]>a[i][1])
	{a[i][0]=j;
	a[i][1]=str[i][j];}
	
	for(i=0;i<k;i++)
	{for(j=0;j<a[i][0]+1;j++)
		printf("%c",str[i][j]);
	for(j=b[i]+1;j<b[i]+4;j++)
		printf("%c",str[i][j]);
         for(j=a[i][0]+1;j<b[i];j++)
		printf("%c",str[i][j]);
	printf("\n");
	}
    
}
