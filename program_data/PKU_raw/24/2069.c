int main(){
    int t,i=0,j=0,len,max,min;
	char str[6000],str2[200][30];
    gets(str);
	len=strlen(str);
	for(t=0;t<len;t++){
		if((str[t]!=' ')&&(str[t]!=',')){
		   str2[i][j]=str[t];
		   j++;
		}
		else{
		   str2[i][j]='\0';
		   i++;
		   j=0;
		}
	}
    str2[i][j]='\0';
	max=0;
	for(j=0;j<i+1;j++){
		if(strlen(str2[j])>strlen(str2[max])){
		   max=j;
		}
	}
	printf("%s\n",str2[max]);
    min=0;
    for(j=0;j<i+1;j++){
		if((strlen(str2[j])<strlen(str2[min]))&&(strlen(str2[j])!=0)){
		   min=j;
		}
	}
	printf("%s",str2[min]);
return 0;
}

