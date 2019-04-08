int main(){
int len[50];
int mark=0,a=0,b,B=0,i,n,minIndex,maxIndex;
char s[999];
char zfc[50][50];
gets(s);

for(a=0;a<50;a++){
	for(b=B,i=0;b<999,i<50;b++,i++){
		if((s[b]!=' ')&&(s[b]!='\0')){
		zfc[a][i]=s[b];
		}
		else if((s[b]==' ')&&(s[b]!='\0')){
		mark++;
		B=b+1;
		break;
		}
		else if(s[b]=='\0'){
			mark++;
			break;
		}

		zfc[a][i+1]='\0';
	}
		if(s[b]=='\0'){
			break;}
	
//printf("zfc a %s\n",zfc[a]);
}

for(n=0;n<mark;n++){
                len[n]=strlen(zfc[n]);
}

maxIndex=0;
minIndex=0;
for(n=1;n<mark;n++){
             	if(len[n]>len[maxIndex]){
	               maxIndex=n;
				}
                else if(len[n]<len[minIndex]){
	                    minIndex=n;
				}
}
printf("%s\n%s\n",zfc[maxIndex],zfc[minIndex]);

return 0;
}