int main (){
      int n,a,b,i=0,j=0;
	  scanf("%d",&n);
	  while(n--){
		  scanf("%d%d",&a,&b);
		  if(a==0&&b==1){i++;}
		  if(a==0&&b==2){j++;}
		  if(a==1&&b==0){j++;}
		  if(a==1&&b==2){i++;}
		  if(a==2&&b==0){i++;}
		  if(a==2&&b==1){j++;}
		 
	  }
	  if(i>j){printf("A");}
	  if(i<j){printf("B");}
	  if(i==j){printf("Tie");}
	  return 0;
}
	  