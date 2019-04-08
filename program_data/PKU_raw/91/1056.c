int main(int argc, char* argv[])
{
	char a[100]={0},b[100]={0};
	int t,i;
	gets(a);
	t=strlen(a);
	for(i=0;i<t-1;i++){
		b[i]=a[i]+a[i+1];
	}
	b[t-1]=a[0]+a[t-1];
	for(i=0;i<t;i++){
		printf("%c",b[i]);
	}
	return 0;
}