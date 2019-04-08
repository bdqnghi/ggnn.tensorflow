int main(){
    char s[100],a[100],b[100],zfc[100],s2[200];
	gets(s);
    gets(a);
	gets(b);
    int i,k,l,la,lb,ls,th=200;
    ls=strlen(s);
    la=strlen(a);
	lb=strlen(b);
    for(i=0;i<ls;i++){
		l=0;
        for(k=i;k<la+i;k++){
			zfc[l]=s[k];
            l++;
        }
		zfc[l]='\0';
        if(strcmp(zfc,a)==0){
		   th=i;
           break;
        }
	}
	if(th<200){
	for(i=0;i<th;i++){
		s2[i]=s[i];
	}	
	for(i=th;i<th+lb;i++){
		s2[i]=b[i-th];
	}
	for(i=th+lb;i<ls+lb-la;i++){
		s2[i]=s[i-lb+la];
	}
	s2[ls+lb-la]='\0';
    puts(s2);}
	if(th==200){
		puts(s);
	}
    
    return 0;
}
