void main()
{
	char a[301], b[52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
		'O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h',
		'i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i,j,k=0,s[52]={0};
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]>='A'&&a[i]<='Z'){
			k=1;
			j=a[i]-'A';
			s[j]+=1;}
		if(a[i]>='a'&&a[i]<='z'){
			k=1;
			j=a[i]-'a'+26;
			s[j]+=1;}
	}
		for(i=0;i<52;i++){
		if(s[i]!=0){
			printf("%c=%d\n",b[i],s[i]);}}
			if(k==0) printf("No");
			
    
}