int issushu(int x);
int main(){
   int n,i,issushu1,issushu2;
   int a=0;
   int sz[10000];
   scanf("%d",&n);
   for(i=0;i<n;i++){
	   sz[i]=i+1;
   }
   for(i=0;i<n;i++){
	   issushu1=issushu(sz[i]);
	   issushu2=issushu(sz[i+2]);
	   if(issushu1&&issushu2){
		   printf("%d %d\n",sz[i],sz[i+2]);
		   a++;
	   }
   }
   if(a==0){
	   printf("empty");
   }
   return 0;
}
int issushu(int x){
	int k,half,issushu=1;
	if(x==1){
		issushu=0;
		return issushu;
	}
	else if(x%2==0){
		if(x==2){
			return issushu;
		}else{
			issushu=0;
			return issushu;
		}
	}
	half=x/2;
	for(k=3;k<=half;k=k+2){
		if(x%k==0){
			issushu=0;
			break;
		}
	}
	return issushu;
}