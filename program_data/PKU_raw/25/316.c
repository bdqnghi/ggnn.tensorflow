int num[100];
int main(){
	int n;
	scanf("%d",&n);
    int i,j;
    num[99]=1;
    for(j=0;j<n;j++){
        for(i=0;i<100;i++){
             num[i]*=2;
             if(num[i]>9){
                 num[i]-=10;
                 num[i-1]+=1;
			 }
		}
	}
    j=0;
    for(i=0;i<100;i++){
		if(num[i]!=0){
            j++;
		}
		if(j!=0){
            printf("%d",num[i]);
		}
	 }
	 return 0;
}