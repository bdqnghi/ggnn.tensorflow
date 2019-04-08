int main(){
	int i,j,t,k,x,y;
	char a[10000];
	scanf("%d",&t);
    for(k=1;k<=t;k++){
		scanf("%s",a);
        for(i=0;a[i]!='\0';i++){
			x=0;
			y=0;
			for(j=0;a[j]!='\0';j++){
				if(a[j]==a[i]){
					x=x+1;
				}
			}
			if(x==1){
				printf("%c\n",a[i]);
				y=1;
				break;
			}
		}
		if(y==0){
			printf("no\n");
		}
	}		
	return 0;
}
