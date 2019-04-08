int main(){
    int m,i,t;
	char zfc1[1500];
	int sz[1500];
	int hz[1500];
	t=0;
	gets(zfc1);
    m=strlen(zfc1);
	for(i=0;i<m;i++){
		if(zfc1[i]==' '){sz[t]=i;t++;}
	}
	if(t!=0){
	for(i=0;i<t;i++){
		if(i==0){hz[i]=sz[0];}
		else{hz[i]=sz[i]-sz[i-1];}
	}
	hz[t]=m-1-sz[t-1];
	for(i=0;i<=t;i++){
        if((hz[i]==1)&&(i!=0)){continue;}
		else if(i==t){printf("%d",hz[i]);}
		else if(i==0){printf("%d,",hz[i]);}
		else{printf("%d,",hz[i]-1);}
		}
	}
	if(t==0){printf("%d",m);}
	return 0;
}