int main(){
	char a[50];
	char b[50];
	gets(a);
	gets(b);
	int i;
	for(i=0;a[i]!='\0';i++){
		if(a[i]>=97){
			a[i]-=32;
		}
	}
	for(i=0;b[i]!='\0';i++){
		if(b[i]>=97){
			b[i]-=32;
		}
	}
	if(strcmp(a,b)>0){printf(">");}
	else if(strcmp(a,b)==0){printf("=");}
	else{printf("<");}
	return 0;
}
