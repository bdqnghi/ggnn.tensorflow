int main()
{
	char s[120],s0[120];
	char a[20],b[20];
	int k=1,ls;
	cin.getline(s,100,'\n');
	cin>>a>>b;
	for(int i=0;i<strlen(s)-strlen(a)+1;i++){
		ls=strlen(s);
		if(s[i]==a[0]&&(s[i+strlen(a)]==32||s[strlen(a)+i]=='\0')&&(i==0||s[i-1]==32)){
		for(int j=1;j<strlen(a);j++)
			if(s[i+j]!=a[j]){
				k=0;continue;}}
		else k=0;
		if(k==1){
			for(int g=0;g<i;g++)
				s0[g]=s[g];
			for(int n=i+strlen(a);n<strlen(s);n++)
				s0[n-strlen(a)+strlen(b)]=s[n];
			for(int m=0;m<strlen(b);m++)
				s0[i+m]=b[m];
			for(int c=0;c<ls-strlen(a)+strlen(b);c++)
				s[c]=s0[c];
			s[ls-strlen(a)+strlen(b)]='\0';
		    i+=strlen(b)-1;}
	    k=1;}
	cout<<s<<endl;
	return 0;
}		