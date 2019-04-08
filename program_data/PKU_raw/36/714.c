void main()
{
	void change(char a[],int n);
	int n;
	char a[100],b[100];
	scanf("%s %s",a,b);
	n=strlen(a);
	change(a,n);
	change(b,n);
	if(strcmp(a,b)==0)
		printf("YES");
	else printf("NO");
}
void change(char a[],int n)
{
	int i,j;
	char t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
}


