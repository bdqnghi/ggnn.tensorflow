
void main(){
	int n,l,first,result;
	int i,j;
	char id[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		result=1;
		scanf("%s",&id);
		l=strlen(id);
		if((id[0]>=65&&id[0]<=90)||(id[0]>=97&&id[0]<=122)||id[0]=='_'){
			first=1;
		}else{
			result=0;
			first=0;
		}
		for(j=1;j<l;j++){
			if(first){
				if((id[j]>=65&&id[j]<=90)||(id[j]>=97&&id[j]<=122)||id[j]=='_'||(id[j]>=48&&id[j]<=57)){
					;
				}else{
					result=0;
					break;
				}
			}else{
				break;
			}
		}
		if(result){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
}
