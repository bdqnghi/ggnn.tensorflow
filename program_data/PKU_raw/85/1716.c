int main (){
	char str[21];
	int sz[21]={0};
	int l,n,i,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s",&str);
		l= strlen(str);
		for(m=0;m<l;m++){
			if((str[m]<='z'&&str[m]>='a')||str[m]=='_'||(str[m]<='Z'&&str[m]>='A')||(str[m]<='9'&&str[m]>='0'))
			{sz[i]=1;
			}else{
			sz[i]=0	;
			break;
			}
		}
			if (str[0]=='9'||str[0]=='8'||str[0]=='7'||str[0]=='6'||str[0]=='5'||str[0]=='4'||str[0]=='3'||str[0]=='2'||str[0]=='1'||str[0]=='0'){
				sz[i]=0;
			}
	}

	for(i=1;i<=n;i++){
		if(sz[i]==1){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}

		
	
	return 0;
}

