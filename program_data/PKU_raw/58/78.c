
void main(){
	int n,len,check;
	int i;
	char name[81],num[10];
	gets(num);
	n=atoi(num);
	while(n--){
		check=1;
		gets(name);
		len=strlen(name);
		for(i=0;i<len;i++){
			if(i==0){
				if((name[i]=='_')||(name[i]>='A'&&name[i]<='Z')||(name[i]>='a'&&name[i]<='z')){
					continue;
				}else{
					check=0;
					break;
				}
			}else{
				if((name[i]>='A'&&name[i]<='Z')||(name[i]>='a'&&name[i]<='z')||(name[i]>='0'&&name[i]<='9')||(name[i]=='_')){
					continue;
				}else{
					check=0;
					break;
				}
			}
		}
		printf("%d\n",check);
	}
}
