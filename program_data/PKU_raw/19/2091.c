
int main(){
	char zfc[101],sor[101],rep[101];
	int dec,i,j;
	gets(zfc);
	scanf("%s",sor);
	scanf("%s",rep);
	int n=strlen(zfc);
	int k=strlen(sor);
   
    
	for(i=0;i<n;i++){
		dec=0;
		for(j=i;j<=i+k-1;j++){
			if(zfc[j]!=sor[j-i]){
				dec=1;
				break;
			}
		}
		
		if(((i==0)&&(dec==0))||((dec==0)&&(zfc[i-1]==' '||zfc[i-1]==','||zfc[i-1]=='.'))){
			printf("%s",rep);
			i=i+k-1;
		}
		else{
			printf("%c",zfc[i]);
			continue;
		}
	}
	return 0;
}
