
void main(){
	char c;
	int flag=0;
	do{
		scanf("%c",&c);
		if(c==' '){
			if(flag==0){
				flag=1;
				printf("%c",c);
			}
			else
				flag=1;
		}
		else
			flag=0;
		if(flag==0)
			printf("%c",c);
	}while(c!='\n');
}