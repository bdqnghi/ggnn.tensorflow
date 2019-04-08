int main(){
	float a;
	int bar=0;
	scanf("%f",&a);
	char zfc[2][500];
	scanf("%s",zfc[0]);
	scanf("%s",zfc[1]);
	float count=0.0;
	if(strlen(zfc[0])!=strlen(zfc[1]))
		printf("error");
	else{
		float len=strlen(zfc[0]);
		for(int i=0;i<len;i++){
			if((zfc[0][i]!='A'&&zfc[0][i]!='T'&&zfc[0][i]!='C'&&zfc[0][i]!='G')||(zfc[1][i]!='A'&&zfc[1][i]!='T'&&zfc[1][i]!='C'&&zfc[1][i]!='G')){
				printf("error");
				bar=1;
				break;
			}
			else if(zfc[0][i]==zfc[1][i])
				count+=1.0;
		}
 	    if(count/len>=a&&bar==0)
			printf("yes");
		if(count/len<a&&bar==0)
			printf("no");
	}
    return 0;
}