int main(){
	int i,j,n;
	char l[max+1];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",l);
		for(j=0;j<l[j];j++){
			if(!((l[j]=='_')||
			(l[j]>='A'&&l[j]<='Z')||
			(l[j]>='a'&&l[j]<='z')||
			(l[j]>='0'&&l[j]<='9'&&j>0)))
			break;
		}
		if(l[j]){
			printf("no\n");
		}
		else{
			printf("yes\n");
		}
	}
	return 0;
}