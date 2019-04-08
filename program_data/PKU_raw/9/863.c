int main()
{
	int n,i,j,age[100],e;
	char id[100][10],ex[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",id[i],&age[i]);
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if((age[j]<age[j+1]&&age[j]>=60)||(age[j]<age[j+1]&&age[j+1]>=60)){
				e=age[j];
				age[j]=age[j+1];
				age[j+1]=e;
				strcpy(ex,id[j]);
				strcpy(id[j],id[j+1]);
				strcpy(id[j+1],ex);

			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",id[i]);
	}

	return 0;
}

