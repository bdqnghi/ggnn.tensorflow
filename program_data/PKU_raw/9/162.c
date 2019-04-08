int main(){
	int n,i,j,b;
	struct{
		char hao[10];
		int ni;
		int pa;
	}dk[100],t,p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",&(dk[i].hao),&(dk[i].ni));
	}
     for(i=0;i<n-1;i++){
		 for(j=0;j<n-i-1;j++){
		if((dk[j].ni<60)&&(dk[j+1].ni>=60)){
			t=dk[j];
			dk[j]=dk[j+1];
			dk[j+1]=t;
		}
		
		 }
	}	
	 for(i=0;i<n-1;i++){
		 for(j=0;j<n-1-i;j++){
if((dk[j+1].ni>=60)&&(dk[j].ni>=60)&&(dk[j].ni<dk[j+1].ni)){
            p=dk[j];
			dk[j]=dk[j+1];
			dk[j+1]=p;
		}
		 }
	 }
	 b=strlen(dk[0].hao);
	for(i=0;i<n;i++){
		for(j=0;j<b;j++){
	printf("%c",dk[i].hao[j]);
		}
		printf("\n");
	}
	 return 0;
}
