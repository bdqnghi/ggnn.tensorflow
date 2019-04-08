int main(){
	char N[101],s[100];
	int i,p;
	int j=0,ys=0;
	scanf("%s",N);

	if(strlen(N)==1){
		printf("0\n%s",N);
		return 0;
	}
	

	for(i=0;i<strlen(N)-1;i++){
		if(i==0){
			p=(N[i]-'0')*10+N[i+1]-'0';
		}
		else{
			p=ys*10+N[i+1]-'0';
		}
		ys=p%13;		
		if(i==0&&p/13==0){
			continue;			
		}
		s[j]=p/13+'0';		
		j++;
	}
	s[j]='\0';
	if(j==0){
		s[0]='0';
		s[1]='\0';
	}
	printf("%s\n%d",s,ys);
	return 0;
}
