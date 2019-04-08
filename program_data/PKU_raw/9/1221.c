int main(){
	int n;
	int i,j=0;
	scanf("%d",&n);
	char **id=(char**)malloc(sizeof(char*)*n);
	for(i=0;i<n;i++){
		id[i]=(char*)malloc(sizeof(char)*10);
	}
	int p=0;
	int *year=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%s %d",id[i],&year[i]);
		if(year[i]>=60){
			p++;
		}
	}
	char **idolder=(char**)malloc(sizeof(char*)*p);
	for(i=0;i<n;i++){
		idolder[i]=(char*)malloc(sizeof(char)*10);
	}
	int *yearolder=(int*)malloc(sizeof(int)*p);
	for(i=0;i<n;i++){
		if(year[i]>=60){
			idolder[j]=id[i];
			yearolder[j]=year[i];
			j++;
		}
	}
	int e;
	char *id1=(char*)malloc(sizeof(char)*10);
	for(i=1;i<=p;i++){
		for(j=0;j<p-i;j++){
			if(yearolder[j+1]>yearolder[j]){
				id1=idolder[j];
				idolder[j]=idolder[j+1];
				idolder[j+1]=id1;
				e=yearolder[j];
				yearolder[j]=yearolder[j+1];
				yearolder[j+1]=e;
			}
		}
	}
	for(i=0;i<p;i++){
		printf("%s\n",idolder[i]);
	}
	for(i=0;i<n;i++){
		if(year[i]<60){
			printf("%s\n",id[i]);
		}
	}

return 0;
}