int main()
{
	int i,l,k;
	char zfc[31];
	gets(zfc);
	l=strlen(zfc);
	for(i=0;i<l;i++){
		
		if((zfc[i]=='1')||(zfc[i]=='2')||(zfc[i]=='3')||(zfc[i]=='4')||(zfc[i]=='5')||(zfc[i]=='6')||(zfc[i]=='7')||(zfc[i]=='8')||(zfc[i]=='9')||(zfc[i]=='0')){
		printf("%c",zfc[i]);
		}else{
			printf("\n");
			for(k=i+1;k<l;k++){
				if(zfc[k]!='0'&&zfc[k]!='1'&&zfc[k]!='2'&&zfc[k]!='3'&&zfc[k]!='4'&&zfc[k]!='5'&&zfc[k]!='6'&&zfc[k]!='7'&&zfc[k]!='8'&&zfc[k]!='9'){
				i++;
				}else{
					break;
				}
			}
		}
	}
	return 0;
}