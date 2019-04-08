	void sort(char c[],int n);
int main(int argc, char* argv[])
{

	int len1,len2;
	char a[200],b[200];
	scanf("%s%s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	sort(a,len1);
	sort(b,len2);
	if(strcmp(a,b)==0) printf("YES");
	else printf("NO");
    return 0;
}
void sort(char c[],int n)
{
	int i,k;
	char temp;
	for (k=n-1;k>0;k--)
	{
		for (i=0;i<k;i++)
		{
			if (c[i]>c[i+1])
			{
				temp=c[i];
				c[i]=c[i+1];
				c[i+1]=temp;
			}
		}
	}
}