int main(){
	char str[101],a[100][100],b[100],c[100],*ps;
	int i,k,flag=0,j;
	gets(str);
	gets(c);
	gets(b);
	i = 0; j = 0;
	for(ps=str;*ps!='\0';ps++){
		if(*ps != ' '){
			a[i][j] = *ps;
			j++;
		}
		else if(*ps == ' '){
			a[i][j] = '\0';
			j = 0;
			i++;
		}
	}
	a[i][j] = '\0';
	k=i;
	for(i=0;i<=k;i++){
		if(strcmp(a[i],c)==0){
			strcpy(a[i], b);
			flag=1;
		}
	}
	if(flag==1){
	    for(i=0;i<k;i++){
		    printf("%s ",a[i]);
		}
	    printf("%s",a[k]);
	}
	else if(flag==0){
		printf("%s",str);
	}
	return 0;
}



