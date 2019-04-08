int main(){
	int n;
	scanf("%d",&n);
	int a,i,b,c,d;
	scanf("%d\n",&a);
	scanf("%d\n",&c);
	for(i=1;i<=n-2;i++){
					  scanf("%d\n",&b);
					  if(b>a&&a>c){
					  		  c=a;
					  		  a=b;			  		  
							  }
					  if(b>c&&c>a){
					  			   a=b;
					  			   c=c;
								   }
				      if(a>b&&b>c){
					  			   a=a;
					  			   c=b;
								   }
				      if(a>c&&c>b){
					  			   a=a;
					  			   c=c;
								   }
				      if(c>a&&a>b){
				                   d=c;
				                   c=a;
				                   a=d;
								   }
				      if(c>b&&b>a){
					  			   a=c;
					  			   c=b;
								   }		  
					  }
    printf("%d\n%d",a,c);    
    return 0;
}