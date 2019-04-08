int main(int argc, char* argv[])
{
	int n,m,i,j,l;
	char a[50];
	
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%s",a);
		l=strlen(a);
		if (a[l-1]=='g') {for (j=0;j<=l-4;j++) printf("%c",a[j]);printf("\n");}
		else {for (j=0;j<=l-3;j++) printf("%c",a[j]);printf("\n");}
	}


	return 0;
}