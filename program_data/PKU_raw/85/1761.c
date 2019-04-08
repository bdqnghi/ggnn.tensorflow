int main(){
	int len,judge,i,all,p;
	char input[21];
	scanf("%d",&all);
	for(p=0;p<all;p++){
		scanf("%s",input);
		len=strlen(input);
		judge=0;
		if(input[0]>='a'&&input[0]<='z'){judge=1;}
		if(input[0]>='A'&&input[0]<='Z'){judge=1;}
		if(input[0]=='_'){judge=1;}
		if(input[0]>='9'&&input[0]<='1'){judge=0;}
		if(input[0]=='0'){judge=0;}
		if(judge==0){printf("no\n");continue;}
		for(i=1;i<len;i++){
			judge=0;
			if(input[i]>='a'&&input[i]<='z'){judge=1;}
			if(input[i]>='A'&&input[i]<='Z'){judge=1;}
			if(input[i]>='1'&&input[i]<='9'){judge=1;}
			if(input[i]=='0'){judge=1;}
			if(input[i]=='_'){judge=1;}
			if(judge==0){printf("no\n");break;}



	}
	if(judge==0){continue;}
	printf("yes\n");



	}

	
return 0;
}


 