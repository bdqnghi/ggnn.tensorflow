main(){
	char s[100000]={'\0'},c;
	int n,a[100000]={0},i,j,k,len,num2;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(s);
		len=strlen(s);
		for(j=0;j<len;j++){
			for(k=0;k<len;k++){if(s[j]==s[k]) a[j]++;}
			if(a[j]==1){
			c=s[j];
			printf("%c\n",c);
			for(j=0;j<len;j++){
				s[j]='\0';}
			continue;}
		}
		num2=0;
		for(k=0;k<len;k++){if(a[k]!=1) num2++;}
			if(num2==len) printf("no\n");
		for(j=0;j<len;j++){
			s[j]='\0';a[j]=0;}
		
		}
	}
