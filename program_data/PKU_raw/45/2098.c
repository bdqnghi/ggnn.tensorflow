
int main(int argc, char* argv[])
{
	char s[50],w[50];
	int i,j,k,p=0,m;
	scanf("%s %s",s,w);
	for(i=0;w[i]!='\0';i++){
		if(w[i]==s[0]){
			for(k=i+1,j=1;s[j]!='\0';j++,k++){
				if(w[k]==s[j]){
					p=1;
					m=i;
				}
				else{
					break;
					p=0;
				}
			}
		}
		if(p==1){
			printf("%d",m);
			break;
		}
	}

	

	
	return 0;
}

