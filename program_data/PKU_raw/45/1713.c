
int main(){
	char s[50];
	char w[50];
	scanf("%s",s);
	scanf("%s",w);

	int ls=strlen(s);
	int lw=strlen(w);
	int i,j;
	int t=1;
	
	//printf("%d\n",ls);
	for(i=0;i<50;i++){
	
		for(j=0;j<ls;j++){
		//	printf("%c %c\n",w[i+j],s[j]);
			if(w[i+j]!=s[j]){
				t=0;
				break;
			}

			if(w[i+j]==s[j]){
				t=1;
				continue;
			}

		}

		if(t==1){
			printf("%d\n",i);
			break;
		}
	}	

	return 0;
}
