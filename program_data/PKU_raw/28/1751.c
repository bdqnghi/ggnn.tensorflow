
int main(){
    char wd[300][20],m;
	int len[300],i,j,k,tag=0;
	for(i=0;;){
		k=0;
		while((m==' ')||(m=='?')||(m==',')||(m=='!')){
			scanf("%c",&m);
		}
		wd[i][k]=m;
		for(k=1;;){
			scanf("%c",&m);
			if(m==' '){
				wd[i][k]='\0';
				len[i]=k;
				break;
			}
			else if(m=='\n'){
				wd[i][k]='\0';
				tag=1;
				len[i]=k;
				break;
			}
			else{
				wd[i][k]=m;
				k++;
			}
		}
		if(tag==1){
			break;
		}
		i++;
	}
	printf("%d",len[0]-1);
	for(j=1;j<=i;j++){
		printf(",%d",len[j]);
	}
	return 0;
}


