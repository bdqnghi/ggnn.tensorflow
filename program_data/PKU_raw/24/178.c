int main()
{
char a[100]={0},b[100][100]={0};
int i,j,m=0,n=1,k=0,max=0,min=0;
gets(a);
m=strlen(a);
for(j=0;j<=m-1;j++)
	if(a[j]==32)
		n++;
for(j=0;j<=n-1;j++)
{
	for(i=0;a[k]!=32;i++)
	{
		b[j][i]=a[k];
		k++;
	}
	if(a[k]==32)
		k++;
}
for(j=0;j<=n-2;j++)
{
	if(strlen(b[j+1])>strlen(b[max]))
		max=j+1;
	else if(strlen(b[j+1])<strlen(b[min]))
		min=j+1;
}
puts(b[max]);
puts(b[min]);
}
