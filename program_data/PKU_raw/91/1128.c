

int main(int argc, char* argv[])
{
	int n,i;
	char a[101],b[101]={0};
	gets(a);
	n=strlen(a);
	for(i=0;i<n-1;i++){
		b[i]=a[i]+a[i+1];
		}
	b[n-1]=a[n-1]+a[0];
	puts(b);
	return 0;
}
