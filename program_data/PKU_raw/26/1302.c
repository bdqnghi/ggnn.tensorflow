int main(){
    int i,m;                 
    char zfc[1000],jg[1000];
    gets(zfc); 
    m=0;
    for(i = 0; zfc[i]!='\0'; i++){   
    	if(zfc[i]!=' '){
			jg[m]=zfc[i];
			m++;
		}else if(zfc[i]==' '&&zfc[i+1]!=' '){
			jg[m]=zfc[i];
			m++;
		}
	}
			jg[m]='\0';
			printf("%s\n",jg);
    return 0;
}
