int main(){
	int n,i,j,h;
	j=1;
	h=1;
	scanf("%d",&n);
	double hei[50],man[50],woman[50];
	char xb[50][10];
	int chang[50];
	for(i=1;i<=n;i++){
		scanf("%s %lf\n",xb[i],&hei[i]);
		chang[i]=strlen(xb[i]);
		if(chang[i]==4){
			man[j]=hei[i];
			j++;
		}
		if(chang[i]==6){
			woman[h]=hei[i];
			h++;
		}
	}
	j--;
	h--;
	int k;
	double e;
	for(k=1;k<j;k++){
		for(i=1;i<=j-k;i++){
			if(man[i]>man[i+1]){
				e=man[i+1];
				man[i+1]=man[i];
				man[i]=e;
			}
		}
	}
	for(k=1;k<h;k++){
		for(i=1;i<=h-k;i++){
			if(woman[i]<woman[i+1]){
				e=woman[i+1];
				woman[i+1]=woman[i];
				woman[i]=e;
			}
		}
	}
	for(i=1;i<=j;i++)
		printf("%.2lf ",man[i]);
	printf("%.2lf",woman[1]);
	for(i=2;i<=h;i++)
		printf(" %.2lf",woman[i]);
	return 0;
}