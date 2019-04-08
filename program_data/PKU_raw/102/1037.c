/*
*/
int main(){
	int n,i,j,b,a;
	char x,str[41][21];
	double sz[41],male[41],female[41],t;
    scanf("%d",&n);
	for(i=0;i<41;i++){
		male[41]=-1;
		female[41]=-1;
	}
	for(i=0;i<n;i++){
		scanf("%c",&x);
		scanf("%s %lf",str[i],&sz[i]);
	}
	a=0;
	b=0;
	for(i=0;i<n;i++){
		if(str[i][0]=='m'){
			male[a]=sz[i];
			a++;
		}else if(str[i][0]='f'){
			female[b]=sz[i];
			b++;
		}
	}
	for(i=1;i<a;i++){
		for(j=0;j<a-i;j++){
			if(male[j]>male[j+1]){
				t=male[j];
				male[j]=male[j+1];
				male[j+1]=t;
			}
		}
	}
	for(i=1;i<b;i++){
		for(j=0;j<b-i;j++){
			if(female[j]<female[j+1]){
				t=female[j];
				female[j]=female[j+1];
				female[j+1]=t;
			}
		}
	}
	for(i=0;i<a;i++){
		printf("%.2lf ",male[i]);
	}
	for(i=0;i<b;i++){
		if(i<b-1){
			printf("%.2lf ",female[i]);
		}else{
            printf("%.2lf\n",female[i]);
		}
	}
	return 0;
}