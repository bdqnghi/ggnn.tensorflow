int main()
{
  int n, a=0, b=0, i;
  scanf("%d", &n);
  if(n%10!=0){
		 a=n%10;
		 n=n/10;
	  }	  
  for(i=0;i<4;i++){
     if(n%10!=0){
	     b=n%10;
		 a=a*10+b;
		 n=n/10;
	  }
  }
  printf("%d\n", a);
  return 0;
}