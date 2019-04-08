int main(){
	int i,j,k,n=1,t,kong,cs[100],d;
	char zfc[1000],zf[1000];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",&zfc);
		zf[0]=zfc[0];
		cs[0]=1;
		for(j=1;j<100;j++){
			cs[j]=0;
		}
		for(j=1;j<strlen(zfc);j++){
			kong=0;
			for(k=0;k<n;k++){
				if(zfc[j]==zf[k]){
					kong=1;
					cs[k]=cs[k]+1;
					break;
				}
			}
			if(kong==0){
				zf[n]=zfc[j];
				cs[n]=cs[n]+1;
				n=n+1;
                d=n;
			}
		}
         kong=0;
		for(j=0;j<d;j++){
			
			if(cs[j]==1){
				printf("%c\n",zf[j]);
				kong=1;
				break;
			}
			
				
			
		}
	
		if(kong==0){
			printf("no\n");
		}
		
	}
		
return 0;
    }
