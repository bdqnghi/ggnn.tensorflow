int minf(int p,int min);
int main(){
	int n,i,k,p,zs[20000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&p);
		//for(min=2;min<=(int)sqrt(p);min++){
			//if(p%min==0){
				zs[i]=minf(p,2);
			    //printf("%d\n",minf(p,min));
		//	}			
		//}
		zs[i]++;
	} 
	for(i=0;i<n-1;i++){
		printf("%d\n",zs[i]);
	}
	printf("%d",zs[n-1]);
	//scanf("%d",&n);
    return 0; 
}
int minf(int p, int min){
	int x=0,i;
	i=min;
	for(i;i<=(int)sqrt(p);i++){
		if(p%i==0){
			x+=minf(p/i,i)+1;
		}
	}
	
	return x;
	}