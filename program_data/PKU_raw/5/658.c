int main(){
	int i,t,k=0;
	double rate;
	char a[501],b[501];
	scanf("%lf",&rate);
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(a)!=strlen(b)){
	  printf("error");
	}
	else{
	  t=strlen(a);
	  for(i=0;i<t;i++){
		  if(a[i]!='T'&&a[i]!='G'&&a[i]!='C'&&a[i]!='A'){
		  printf("error");
		  break;
		  }
		  if(b[i]!='T'&&b[i]!='G'&&b[i]!='C'&&b[i]!='A'){
		  printf("error");
		  break;
		  }
		  if(a[i]==b[i]){
		  k++;
		  }
		  if(i==t-1){
	          if(1.0*k/t>=rate){
	          printf("yes");
			  }
	          else{
	          printf("no");
			  }
		  }
	  }
	}
return 0;
}
