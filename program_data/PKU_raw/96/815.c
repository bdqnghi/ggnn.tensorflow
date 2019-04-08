int main(){
	char str[1100],stre[1100];
	scanf("%s", str);
	int a=strlen(str),l=(str[0]-'0'),t,i,j,x=0,y;
	if(((a==2)&&(str[1]-'0')<3&&(str[0]-'0')==1)||(a==1)){
		printf("0");
		printf("\n%s",str);
	}
	else if((a>2)||(a==2&&(str[0]-'0')*10+(str[1]-'0')>=13)){
	for(i=0;i<a-1;i++){
		t=l%13;
		stre[i]=l/13+'0'; 
		l=t*10+str[i+1]-'0';
	}
    stre[a-1]=l/13+'0'; 
	for(i=0;i<a;i++){
		if((stre[i]-'0')!=0){
			x++;
		}
		if(x!=0){
			printf("%c",stre[i]);
		}
	}
	y=l%13;
	printf("\n%d",y);
	}
		
	return 0;
}

