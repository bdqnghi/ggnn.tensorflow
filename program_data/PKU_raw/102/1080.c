int main(){
	int num,i,j=0,k=0,m,n;
	double man[50],woman[50],r[50],e;
	char sx[50][10];
	scanf("%d",&num);
	for(i=0;i<num;i++){
     scanf("%s%lf",sx[i],&r[i]);
	}
		for(i=0;i<num;i++){
		if(sx[i][0]=='m'){
           man[j]=r[i];
		   j++;
		}else {
           woman[k]=r[i];
		   k++;
		}
	}
	for(i=1;i<=j;i++){
		for(m=0;m<j-i;m++){
			if(man[m]>man[m+1]){
               e=man[m+1];
			   man[m+1]=man[m];
			   man[m]=e;
			}
		}	
	}
	for(i=1;i<=k;i++){
		for(n=0;n<k-i;n++){
			if(woman[n]<woman[n+1]){
				e=woman[n+1];
				woman[n+1]=woman[n];
				woman[n]=e;
			}
		}
	}
    for(i=0;i<j;i++){
        printf("%.2lf ",man[i]);
	}
	for(i=0;i<k-1;i++){
        printf("%.2lf ",woman[i]);
	}
     printf("%.2lf",woman[i]);
return 0;
}