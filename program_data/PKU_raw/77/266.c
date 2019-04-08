int main()
{
	char a[100];
	int b[100], i, j=0, x;
	scanf("%s", a);
    x=a[0];
	/*for(i=1;i<strlen(a);i++)
	{
		if(a[i]!=a[0]) y=a[i];
	}*/
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==x) {b[j]=i; j++;}
		else {printf("%d %d\n", b[j-1], i); j--;}
	}
	return 0;
}