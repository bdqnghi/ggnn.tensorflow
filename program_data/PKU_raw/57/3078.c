int main(){
	int n,m;
	cin>>n;
	char z[50];
	gets(z);
	for (int j=0;j<n;j++) {
		gets(z);
		m=strlen(z);
		if (z[m-1]=='r'||z[m-1]=='y') {
			z[m-1]=0;
			z[m-2]=0;
		}else {
			z[m-1]=0;
			z[m-2]=0;
			z[m-3]=0;
		}
		puts(z);
	}
	return 0;
}