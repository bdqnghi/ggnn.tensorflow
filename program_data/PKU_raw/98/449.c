void main(){
  int i, j, n, b, num=0;
  char string[10000][40];
  char c;
  scanf("%d", &n);
  for(i=0;i<n;i++)
	  scanf("%s",string[i]);
  
  for(i=0;i<n;i++){
	  for(j=0,b=0;(c=string[i][j])!='\0';j++)
		  b++;
	  num=num+b+1;
	 
      if(num<81||num==81){
		  if(i==0)printf("%s", string[0]);
			  else 
	    printf(" %s", string[i]);
	  }
	  else if(num>81){
		printf("\n%s", string[i]);
		num=b+1;
	  }
  }
}
