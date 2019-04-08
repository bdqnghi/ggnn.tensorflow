int main(){
	struct suoyou{
		int qian;
		int hou;
	}suoyous[100];
	int i,k;
	int n,m=0;
	int s=0,e=0;
	int hao[100];
	for(i=0;i<100;i++){
		hao[i]=0;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&suoyous[i].qian,&suoyous[i].hou);
	}
	for(i=0;i<n;i++){
		if(suoyous[i].qian>=90&&suoyous[i].qian<=140&&suoyous[i].hou>=60&&suoyous[i].hou<=90){
			s=i;
			e=i+1;
			while(suoyous[e].qian>=90&&suoyous[e].qian<=140&&suoyous[e].hou>=60&&suoyous[e].hou<=90){
				e+=1;
			}
		}
		hao[m]=e-s;
		m++;
	}
	for(i=1;i<=m;i++){
		for(k=0;k<m-i;k++){
			if(hao[k]<hao[k+1]){
				e=hao[k];
				hao[k]=hao[k+1];
				hao[k+1]=e;
			}
		}
	}
	printf("%d",hao[0]);
	return 0;
}