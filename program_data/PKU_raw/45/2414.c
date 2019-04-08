

int main(int argc, char* argv[])
{
	char child[50],mother[50];
	scanf("%s",child);
	getchar();
	scanf("%s",mother);
	int l=strlen(child),ml=strlen(mother),isbreak,i,k;
	for(i=0;i+l<=ml;i++){
		isbreak=1;
		for(k=0;k<l;k++){
			if(child[k]!=mother[k+i]){
				isbreak=0;
				break;
			}
		}
		if(isbreak){
			printf("%d",i);
			return 0;
		}
	}
}
