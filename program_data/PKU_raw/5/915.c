int main(){
    double x;
	int m,n,i;
         int p=0;
         int s=0;
         int c[1000];
	scanf("%lf",&x);
	char a[500],b[500];
	scanf("%s",a);
	scanf("%s",b);
	m=strlen(a);
	n=strlen(b);
    if(m!=n){
	  printf("error");
           return 0;
	}
	for(i=0;i<m-1;i++){
		if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='G')&&(a[i]!='C')){
		   printf("error");
                     s=1;
		   break;
                     return 0;
		}
	}
	for(i=0;i<n-1;i++){
		if((b[i]!='A')&&(b[i]!='T')&&(b[i]!='G')&&(b[i]!='C')){
		   printf("error");
		   s=1;
                     break;
                     return 0;
		}
	}
        if(s==0){
          for(i=0;i<n;i++){
             c[i]=a[i]/b[i];
          }
        for(i=0;i<m;i++){
            if(c[i]<x){
            p++;
            }   
        }
        if(p==0){
          printf("yes");
        }else{
          printf("no");
        }
     }
        return 0;
}

