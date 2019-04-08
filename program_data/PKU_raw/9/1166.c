
int main(){
	char id[100][10],old[100][10],yog[100][10];
	int n,i,m=0,l=0,age[100],oag[100],yag[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",id[i]);
		scanf("%d",&(age[i]));
		if(age[i]>=60){
             oag[m]=age[i];
			 strcpy(old[m],id[i]);
			 m++;
		}else{
			yag[l]=age[i];
			strcpy(yog[l],id[i]);
			l++;
		}
	}
    char e_id[1][10];
	int e_age,k;
	for(k=1;k<=m;k++){
		for(i=0;i<m-k;i++){
			if(oag[i]<oag[i+1]){
				strcpy(e_id[0],old[i]);
				strcpy(old[i],old[i+1]);
				strcpy(old[i+1],e_id[0]);
				e_age=oag[i];
				oag[i]=oag[i+1];
				oag[i+1]=e_age;
			}
		}
	}
	for(i=0;i<m;i++){
		puts(old[i]);
	}
	for(i=0;i<l;i++){
		puts(yog[i]);
	}
	return 0;
}



