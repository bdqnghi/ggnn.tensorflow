int main(){
	int n,age[100],oage[100];
	char ID[100][10],old[100][10],young[100][10];
	scanf("%d",&n);
	int i,m;
	for(i=0;i<n;i++){
		scanf("%s%d",ID[i],&age[i]);
	}
	int k=0,j=0;
	for(i=0;i<n;i++){
		if(age[i]<60){
			strcpy(young[k],ID[i]);
			k++;
		}
		else{
			oage[j]=age[i];
			strcpy(old[j],ID[i]);
			j++;
		}
	}
	for(i=150;i>=60;i--){
		for(m=0;m<j;m++){
			if(oage[m]==i){
				printf("%s\n",old[m]);
			}
		}
	}
	for(i=0;i<k;i++){
		printf("%s\n",young[i]);
	}
	return 0;
}

