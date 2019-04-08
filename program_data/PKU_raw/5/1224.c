
int main ( ){
	int i,num=0,a1,b1,t=1;
	char a[500],b[500];
	double n;
	scanf("%lf",&n); 
    scanf("%s%s",a,b);
	a1=strlen(a);
	b1=strlen(b);
	if(a1!=b1){
	printf("error");
	
	t=0;}
    else {
	  for(i=0;i<a1;i++){
		  if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){
		  printf("error");t=0;
		  break;
		  }
		  if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){
		  printf("error");t=0;
		  break;

		  }
	  }
	
	}

	if(t==1){
		for(i=0;i<a1;i++){
			if(a[i]==b[i]){
			num++;
			}
		}
		if(1.0*num/a1>n){
		   printf("yes");
		}
		else{
		  printf("no");
		}
	}


    



return 0;
}