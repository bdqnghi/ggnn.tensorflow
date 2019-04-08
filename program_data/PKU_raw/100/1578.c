int main (){
	char str[300],zf[53],e[2];
	int sz[800];
	int i,j=0,k;
	scanf("%s",str);
	for(i=0;i<800;i++){
		sz[i]=0;}

	for(i=0;str[i]!='\0';i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			zf[j]=str[i];
			sz[str[i]]++;
			j++;
			
		}
    
	}


	
    for(k=1;k<j;k++){
		for(i=0;i<j-k;i++){
			if(zf[i]>zf[i+1]){
				e[0]=zf[i+1];
				zf[i+1]=zf[i];
				zf[i]=e[0];
			}
		}
	}
  	
	if(j==0){
		printf("No\n");
	
	}
	else{
		for(i=0;i<j;i++){
			if((i!=0)&&(zf[i-1]==zf[i])){
				continue;
			}
			printf("%c=%d\n",zf[i],sz[zf[i]]);
		}
	}
	

 return 0;
}