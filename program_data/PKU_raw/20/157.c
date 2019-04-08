void main()
{char str[100][11],substr[100][4],a[100][15];
int  q,i,j,k,m,n,x,y;
for(i=1;scanf("%s%s",str[i],substr[i])!=EOF;i++)
{
	x=strlen(str[i]);y=strlen(substr[i]);
	for(j=0;j<=x-1;j++)
    {for(m=0,k=0;k<=x-1;k++)
	if(str[i][j]>=str[i][k])m++;
	if(m==x) {n=j+1;break;}}
    strncpy(a[i],str[i],n);a[i][n]='\0';
	strcat(a[i],substr[i]);
    for(j=n+y;j<x+y;j++)
		a[i][j]=str[i][j-y];
	a[i][x+y]='\0';
	printf("%s\n",a[i]);
}
}