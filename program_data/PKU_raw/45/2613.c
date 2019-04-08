int main(int argc, char* argv[])
{
	char a[50],b[50];
	char *p;
	scanf("%s%s",a,b);
	p=strstr(b,a);
	printf("%d",p-b);
	return 0;
}
