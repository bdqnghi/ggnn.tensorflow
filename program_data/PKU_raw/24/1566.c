int main(){
	char dc[10000];
	gets(dc);
	char fz[200][50];
	int len=strlen(dc);
	int i,k=0,j=0,l=0,num=1,cd[200]={0};
	for(i=0;i<len;i++){
		if(dc[i]!=32){
			fz[k][j]=dc[i];
			j++;
			cd[k]++;
		}
		else{
			num++;
			k++;
			j=0;
		}
	}
	char max[50],min[50];
    strcpy(max,fz[0]);
    strcpy(min,fz[0]);
	int zc=cd[0];
	int zd=cd[0];
	for(k=0;k<num;k++){
		if(cd[k]>zc){
			strcpy(max,fz[k]);
			zc=cd[k];
		}
		if(cd[k]<zd){
			strcpy(min,fz[k]);
			zd=cd[k];
		}

		if((cd[k]==zc)&&(cd[k]==zd)){
			l++;
		}
	}
	if(l!=num){
        printf("%s\n%s\n",max,min);
	}
	else{
	    printf("%s\n%s\n",fz[0],fz[0]);
	}
	return 0;
}






