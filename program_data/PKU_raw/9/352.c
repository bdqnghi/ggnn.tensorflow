int main(){
	int n,i,age[100];
	char id[100][10];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%s%d",id[i],&(age[i]));
	}
	int e;
	char e_id[10];
	for(int k=1;k<=n;k++){
		for (int m=0;m<n-k;m++){
			if((age[m]>=60&&age[m+1]>=60&&age[m]<age[m+1])||(age[m]<60&&age[m+1]>=60)){
				e=age[m+1];
				strcpy(e_id,id[m+1]);
				age[m+1]=age[m];
				strcpy(id[m+1],id[m]);
				age[m]=e;
				strcpy(id[m],e_id);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",id[i]);
	}
	return 0;
}