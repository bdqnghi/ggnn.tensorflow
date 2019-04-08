int main(){
	int n;
	scanf("%d",&n);
	char id[100][10];
	int age[100];
	int oldno=0;
	int xu[100];
	char shunxu[100][10];
	for(int i=0;i<n;i++){
		scanf("%s %d",id[i],&age[i]);
	}
	for(int j=0;j<n;j++){
		if(age[j]>=60){
			xu[oldno]=age[j];
			strcpy(shunxu[oldno],id[j]);
			oldno++;
		}
	}
	
	int num=oldno;
	int e;
	char tem[10];
	for(int k=0;k<n;k++){
		if(age[k]<60){
            xu[oldno]=age[k];
			strcpy(shunxu[oldno],id[k]);
			oldno++;
		}
	}
	for(int x=1;x<=num;x++){
		for(int y=0;y<num-x;y++){
			if(xu[y]<xu[y+1]){
				e=xu[y];
				xu[y]=xu[y+1];
				xu[y+1]=e;
				strcpy(tem,shunxu[y]);
				strcpy(shunxu[y],shunxu[y+1]);
				strcpy(shunxu[y+1],tem);
			}
		}
	}
	for(int z=0;z<n;z++){
		printf("%s\n",shunxu[z]);
	}
    return 0;
}