int main(){
	int n,i,len,j,a=0;
	char str[21];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str);
		len=strlen(str);
		if(str[0]>=48&&str[0]<=57)
			printf("no\n");
		else{
			for(j=0;j<len;j++){
				if((str[j]>=48&&str[j]<=57)||(str[j]>=65&&str[j]<=90)||(str[j]>=97&&str[j]<=122)||str[j]==95)
					a=0;
				else{
					a=1;
					break;
				}
			}
			if(a==0) printf("yes\n");
			if(a==1) printf("no\n");
		}
	}
	return 0;
}



