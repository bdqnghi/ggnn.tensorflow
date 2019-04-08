int main(){
	int n,count=0,k,i;
	char zf[800][81],z;
	scanf("%d%c",&n,&z);
	for(i=0;i<n;i++){
		gets(zf[i]);
	}
	for(int f=0;f<n;f++){
		if(zf[f][0]=='_'||(zf[f][0]>='a'&&zf[f][0]<='z')||(zf[f][0]>='A'&&zf[f][0]<='Z')){
		    k=strlen(zf[f]);
			for(int m=0;m<k;m++){
				if(zf[f][m]=='_'||(zf[f][m]>='a'&&zf[f][m]<='z')||(zf[f][m]>='A'&&zf[f][m]<='Z')||(zf[f][m]<='9'&&zf[f][m]>='0')){
					continue;
				}else{
					count++;
					break;
				}
			}
		}else{
			count++;
		}
		if(count!=0){
			printf("0\n");
		}else{
			printf("1\n");
		}
		k=0;
		count=0;
	}
	return 0;
}