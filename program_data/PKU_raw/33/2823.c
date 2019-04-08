int main(){
	int n;
	char DNA[1000][260];
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		scanf("%s",&(DNA[j]));
	}
	int pd=0,m;
	for(int t=0;t<n;t++){
		pd=strlen(DNA[t]);
		for(m=0;m<pd-1;m++){
			if(DNA[t][m]=='A'){
				printf("T");
			}
			else if(DNA[t][m]=='T'){
				printf("A");
			}
			else if(DNA[t][m]=='C'){
				printf("G");
			}
			else if(DNA[t][m]=='G'){
				printf("C");
			}
		}
		if(DNA[t][pd-1]=='A'){
			printf("T\n");
		}
		else if(DNA[t][pd-1]=='T'){
			printf("A\n");
		}
		else if(DNA[t][pd-1]=='C'){
			printf("G\n");
		}
		else if(DNA[t][pd-1]=='G'){
			printf("C\n");
		}
	}
	return 0;
}