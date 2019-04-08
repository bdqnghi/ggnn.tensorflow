char zfc1[100],zfc2[100],zfc3[100];
int main(){
	int len1,len2,i,j,k=1,g=0;
	gets(zfc1);
	gets(zfc2);
	gets(zfc3);
	len1=strlen(zfc1);
	len2=strlen(zfc2);
	for(i=0;i<len1;i++){
		if(zfc2[0]==zfc1[i]){
			for(j=1;j<len2;j++){
				if(zfc2[j]==zfc1[i+j])
					k++;
			}
		}
		if(k==len2){
			g++;
			break;
		}
		else
			k=1;
	}
	if(g==0)
		puts(zfc1);
	else{
		zfc1[i]=0;
		printf("%s%s%s",zfc1,zfc3,&zfc1[i+len2]);
	}
	return 0;
}