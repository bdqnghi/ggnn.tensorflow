int main(){
	struct std{
		char sex[7];
		double height;
	}ss[50];

	int n;
	scanf("%d",&n);
	double man[50];
	double wam[50];
    int i,j=0,m=0;
	for(i=0;i<n;i++){
	   scanf("%s",ss[i].sex);
	   scanf("%lf",&ss[i].height);
	   if(strcmp(ss[i].sex,"male")==0){
	   man[j]=ss[i].height;
	   j++;}
	   if(strcmp(ss[i].sex,"female")==0){
	   wam[m]=ss[i].height;
	   m++;}
	
	}
	int k,x;
	double e;
	for(k=1;k<=j;k++){
		for(x=0;x<j-k;x++){
			if(man[x]>man[x+1]){e=man[x];
			man[x]=man[x+1];
			man[x+1]=e;}
		
		}
	}
	for(k=1;k<=m;k++){
		for(x=0;x<m-k;x++){
			if(wam[x]<wam[x+1]){
			e=wam[x];
			wam[x]=wam[x+1];
			wam[x+1]=e;
			
			}
		
		}
	
	}
int a,b;
for(a=0;a<j;a++){printf("%.2lf ",man[a]);}
for(b=0;b<m-1;b++){printf("%.2lf ",wam[b]);}
printf("%.2lf",wam[m-1]);
return 0;
}