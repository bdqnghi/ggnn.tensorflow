int main(){
	int n=0,k;
	char suoyou[1000][21];
	scanf("%d\n",&n);
	int i=0,jieguo[1000];
	for(i=0;i<n;i++){
		gets(suoyou[i]);
	}
	for(i=0;i<n;i++){
		jieguo[i]=0;
	}


	for(i=0;i<n;i++){
		if((suoyou[i][0]<65)||((suoyou[i][0]>90)&&(suoyou[i][0]<97)&&(suoyou[i][0]!=95))||(suoyou[i][0]>122)){
			jieguo[i]=1;
		}else{
			for(k=0;k<strlen(suoyou[i]);k++){
				if((suoyou[i][k]<48)||((suoyou[i][k]>57)&&(suoyou[i][k]<65))||((suoyou[i][k]>90)&&(suoyou[i][k]<95))||((suoyou[i][k]>95)&&(suoyou[i][k]<97))||(suoyou[i][k]>122)){
					jieguo[i]=1;
				}
			}
		}
	}
		for(i=0;i<n;i++){
			if(jieguo[i]!=0)
				printf("no\n");
			else
				printf("yes\n");
		}
		return 0;
}
