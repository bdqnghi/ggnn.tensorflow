int main (){
	char xl[300],zm[300],e;
	int i,m,k=0,n;
	scanf("%s",xl);
	n=strlen(xl);
	
	for (i=0;i<n;i++){
		if ((xl[i]>=65&&xl[i]<=90)||(xl[i]>=97&&xl[i]<=122)){
			  zm[k]=xl[i];
			  k++;
		}
	}
	
	
	for(m=1;m<=k;m++){
		for(i=0;i<k-m;i++){
			if(zm[i]>zm[i+1]){
				  e=zm[i];
				  zm[i]=zm[i+1];
				  zm[i+1]=e;
			}
		}
	}
	zm[k]='\0';
    
	m=0;
	for(i=0;i<k;i++){
		if (zm[i]==zm[i+1]){
			for(m=i+1;m<k;m++){
				if(zm[m]==zm[m+1]) continue;
				else {
			
						printf("%c=%d\n",zm[i],m-i+1);
					    i=m;
					break;
				}
             
			}
		}
		else printf("%c=1\n",zm[i]);
    }
	if(m==0){
		printf("No");
	}
	return 0;
}

	