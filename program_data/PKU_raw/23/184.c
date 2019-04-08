void main()
{
char a[20][20];
int i=0,j;
while(scanf("%s",a[i])!=EOF)
i++;
printf("%s",a[i-1]);
for(j=i-2;j>=0;j--)
printf(" %s",a[j]);





}