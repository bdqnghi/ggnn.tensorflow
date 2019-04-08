int main(){
    int n1,n2,l=0;
	double e,q=0;
	int i;
	char a[501],b[501];
    
	
	scanf("%lf\n",&e);
	gets(a);
	gets(b);
    n1=strlen(a);
    n2=strlen(b);
    
    if(n1!=n2){
	printf("error");
    l++;
	}
    if(l==0){
	   for(i=0;i<n1;i++){
		 if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){
		  printf("error");
		  l++;
		  break;
		 }
	
	  }
	
	}
	if(l==0){
	   for(i=0;i<n2;i++){
		        if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
		          printf("error");
				  l++;
				  break;
				}
	
	   }
	
	}
      
    
	
	if(l==0){
	   for(i=0;i<n1;i++){
	   
	      if(a[i]==b[i]){
	         q++;
		  }
	   }
	   if((q/n1)>e){
	      printf("yes");
	   }else{
	      printf("no");
	   }
	
	}
	

return 0;

}