int main()
{
	char a[500];
	int i,j,k,m,x,y;
	scanf("%s",a);
	m=strlen(a);
	for(i=2;i<=m;i++)
	for(j=0;j<=m-i;j++)
	{
	for(k=0,x=0;k<i/2;k++)
	{
	if(a[j+k]==a[j+i-1-k])
	x=1;
	else
	{
	x=0;
	break;
	}
	}
	if(x==1)
	{
	for(y=j;y<=j+i-1;y++)
	printf("%c",a[y]);
	printf("\n");
	}
	x=0;
	}
}