
int main(){
	int n,i,j;
	char id[NUM][LEN];
	int nl[NUM];
	char id_old[NUM][LEN],id_young[NUM][LEN];
	int nl_old[NUM];
	int a=0,b=0;
	scanf("%d",&n);
	char ids[LEN];
	for(i=0;i<n;i++){
		scanf("%s %d",&id[i],&nl[i]);
		if(nl[i]>=60){
			strcpy(id_old[a],id[i]);
			nl_old[a]=nl[i];
			a++;
		}
		else{
			strcpy(id_young[b],id[i]);
			b++;
		}
	}
	int e;
	for(i=1;i<=a;i++){
		for(j=0;j<a-i;j++){
			if(nl_old[j]<nl_old[j+1]){
				e=nl_old[j+1];
				nl_old[j+1]=nl_old[j];
				nl_old[j]=e;
				strcpy(ids,id_old[j+1]);
				strcpy(id_old[j+1],id_old[j]);
				strcpy(id_old[j],ids);
			}
		}
	}
	for(i=0;i<a;i++){
		printf("%s\n",id_old[i]);
	}
	for(i=0;i<b;i++){
		printf("%s\n",id_young[i]);
	}
	return 0;
}