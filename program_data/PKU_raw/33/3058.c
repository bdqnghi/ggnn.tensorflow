int main(){
	int n;
	cin>>n;

	char z1[256],z2[256]; gets(z1);
	for (int j=0;j<n;j++) {
		gets(z1);
		for (int i=0;z1[i]!='\0';i++){
			if (z1[i]=='A') z2[i]='T';else
			if (z1[i]=='T') z2[i]='A';else
			if (z1[i]=='G') z2[i]='C';else
			if (z1[i]=='C') z2[i]='G';
			z2[i+1]=0;
		}	
		puts(z2);
	}
	return 0;
}