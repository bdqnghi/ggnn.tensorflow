int n,len,tot;
char a[1000][50];
void fill(int p);
int main()
{
	int i,j;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%s",&a[i]);
	printf("%s",a[0]);
	tot=strlen(a[0]);
	for (i=1;i<n;i++)
	{
		len=strlen(a[i]);
	    if (tot+len+1<=80)
		{
			printf(" %s",a[i]);
			tot+=len+1;
		}
		else
		{
			printf("\n");
			printf("%s",a[i]);
			tot=len;
		}
	}
}
