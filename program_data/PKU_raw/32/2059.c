int yu(char y)
{
	int b;
	if (y=='0') b=0;
	if (y=='1') b=1;
	if (y=='2') b=2;
	if (y=='3') b=3;
	if (y=='4') b=4;
	if (y=='5') b=5;
	if (y=='6') b=6;
	if (y=='7') b=7;
	if (y=='8') b=8;
	if (y=='9') b=9;
	return (b);
}
void main()
{
	char a[20][103],b[20][103];
	int i,j,k,n,c[20],d[20],e[20][103],f[20][103],m;
	{for (i=0;i<20;i++)
	{	for(j=0;j<103;j++)
	{a[i][j]='\0'; b[i][j]='\0';}}}
	scanf("%d",&n);
	printf("\n");
	for (i=0;i<n;i++)
	{scanf("%s",a[i]);printf("\n");scanf("%s",b[i]);printf("\n\n");}
	{for (i=0;i<n;i++)
	{for(j=0;j<(c[i]=strlen(a[i]));j++)
			e[i][j]=yu(a[i][j]);
     for(j=0;j<(d[i]=strlen(b[i]));j++)
		 f[i][j]=yu(b[i][j]);}}
	for (i=0;i<n;i++)
		for (j=(c[i]-1);j>=(c[i]-d[i]);j--)
		{k=(j-c[i]+d[i]);
		if (e[i][j]>f[i][k])  e[i][j]=(e[i][j]-f[i][k]);
        else if (e[i][j]==f[i][k])  e[i][j]=0;
		else if (e[i][j]<f[i][k])  {e[i][j]=(e[i][j]+10-f[i][k]); 
		{for (m=(j-1);e[i][m]==0;m--) e[i][m]=9;}
			                   e[i][m]=(e[i][m]-1);}
		}
	for (i=0;i<n;i++)
	{j=0; while (e[i][j]==0) j++;for (;j<c[i];j++) printf("%d",e[i][j]); printf("\n");} 
}
	