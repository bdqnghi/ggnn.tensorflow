
int gedui(int zong, int duishu,int ini){
	int p,k=0,end;
	end=zong/duishu;
	if(duishu>2){
		for(p=ini;p<=end;p++){
			k+=gedui(zong-p,duishu-1,p);
		}
	}
	else if(duishu==2){
		k=zong/2-ini+1;
	//	printf("2zong%d,ini%d,k%d\n",zong,ini);
	}
	else if(duishu==1){
		k=1;
	}
	return k;
}

int r(int zong,int dui){
	int o,count=0;
	for(o=1;o<=dui;o++){
		count+=gedui(zong,o,1);
	//	printf("count%d,zong%d,dui%d\n",count,zong,dui);
	}
	return count;
}



int main(){
	int k,m,n;
	int i,dui,u;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		u=0;
		scanf("%d%d",&m,&n);
		if(m>n){
			dui=n;
		}
		else{
			dui=m;
		}
		u=r(m,dui);
		if(i!=0){
			printf("\n");
		}
		printf("%d",u);
	}
	return 0;
}
