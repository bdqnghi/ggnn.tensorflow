int main(int argc, char* argv[])
{
	char a[50],b[50];
	int q,w,i;
	scanf("%s",a);
	scanf(" ");
    scanf("%s",b);
	q=strlen(a);
	w=strlen(b);
	for (i=0;i<w;i++)
	{
	    if (b[i]==a[0])  break;
	}
	printf("%d",i);
	return 0;
}
