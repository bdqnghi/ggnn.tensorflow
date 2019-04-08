int main(){
	int a,i,j,k,n,m;
	a=1;

	j=0;
	char zfc[len],zm[len];
	scanf("%s",zfc);
	n=strlen(zfc);
	for(i=0;i<n;i++){
		if((zfc[i]>='A' && zfc[i]<='Z')||(zfc[i]>='a' && zfc[i]<='z')){
			zm[j]=zfc[i];
			j++;
		
		}
	}zm[j]='\0';
if(j==0){
      printf("No");
}else{
	char e;
	m=strlen(zm);
	for(k=1;k<=m;k++){
		for(j=0;j<m-k;j++){
			if(zm[j]>zm[j+1]){
				e=zm[j+1];
				zm[j+1]=zm[j];
				zm[j]=e;
			}
		}
	}

	for(j=0;j<m-1;j++){
		if(zm[j]==zm[j+1]){
			a++;
		}else{
			printf("%c=%d\n",zm[j],a);
			a=1;
		}
	}
         printf("%c=%d",zm[m-1],a);
}
	    return 0;
}