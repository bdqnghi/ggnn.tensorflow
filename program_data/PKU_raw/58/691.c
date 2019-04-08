int main(){
	int i,u,n,len,flag;
	char str[1000][81],num[10];
	gets(num);
	n=atoi(num);
	for(i=0;i<n;i++){
		flag=1;
		gets(str[i]);
		len=strlen(str[i]);
		if((str[i][0]=='_')||(str[i][0]>='a'&&str[i][0]<='z')||(str[i][0]>='A'&&str[i][0]<='Z')){
			for(u=0;u<len;u++){
				if(str[i][u]=='_'||(str[i][u]>='a'&&str[i][u]<='z')||(str[i][u]>='A'&&str[i][u]<='Z')||(str[i][u]>='0'&&str[i][u]<='9')){
					continue;
				}else{
					flag=0;
					break;
				}
			}
		}else{
			flag=0;
		}
		printf("%d\n",flag);
	}
	return 0;
}
