int main(){
	char zfc[300];
	int geshu[52];
	char zimu[52];
	int i,j;
	int s=0;
	int n;
	for(i=0;i<26;i++){
		geshu[i]=0;
		zimu[i]=65+i;
	}
	for(i=26;i<52;i++){
		geshu[i]=0;
		zimu[i]=71+i;
	}
	scanf("%s",zfc);
	n=strlen(zfc);
	for(j=0;j<n;j++){
		for(i=0;i<52;i++){
			if(zfc[j]==zimu[i]){
				geshu[i]+=1;
			}
		}
	}
	for(i=0;i<52;i++){
		if(geshu[i]!=0){
			s+=geshu[i];
		  printf("%c=%d\n",zimu[i],geshu[i]);
		}
	}
	if(s==0){
			printf("No");
	}
	return 0;
}