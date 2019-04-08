int main()
{
	char fuck[30];
	int i;
	gets(fuck);
	for(i=0;i<30;i++){
		if(fuck[i]=='1'||fuck[i]=='2'||fuck[i]=='3'||fuck[i]=='4'||fuck[i]=='5'||fuck[i]=='6'||fuck[i]=='7'||fuck[i]=='8'||fuck[i]=='9'||fuck[i]=='0'){
			printf("%c",fuck[i]);
		}else{
			if(i==0){
				continue;
			}
			if(fuck[i-1]=='1'||fuck[i-1]=='2'||fuck[i-1]=='3'||fuck[i-1]=='4'||fuck[i-1]=='5'||fuck[i-1]=='6'||fuck[i-1]=='7'||fuck[i-1]=='8'||fuck[i-1]=='9'||fuck[i-1]=='0'){
				printf("\n");
			}
		}
	}
	return 0;
}