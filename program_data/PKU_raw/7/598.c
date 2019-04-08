int main(){
    char su[100],zu[100],tu[100];
    gets(su);
    gets(zu);
    gets(tu);
    int i,j,k,t;
    for(i=0;i<strlen(su);i++){
		for(k=0,j=i;su[j]==zu[k];j++,k++)
    if(k==strlen(zu))
    break;
    if(k==strlen(zu))
    break;
    }
    //printf("%d%d",i,j);
	if(j!=i-1){
    for(t=0;t<i;t++)
    printf("%c",su[t]);
    printf("%s",tu);
    for(t=j;t<strlen(su);t++)
		printf("%c",su[t]);}
	else
		printf("%s",su);
    return 0;
    } 
