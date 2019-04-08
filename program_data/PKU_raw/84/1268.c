int main()
{
   int n,i,a,b,c,x,y;
      scanf("%d\n",&n);
	  i=1;
      scanf("%d\n%d\n",&a,&b);
	  if(a>b){
		  x=a,y=b;
      }else{
		  x=b,y=a;
	  }
	  while(i<=n-2){
	  scanf("%d",&c);
	  if(c>x){
          y=x,x=c;
	  }
	  else if(c<x&&c>y){
		  x=x,y=c;
	  }
	  else if(c<y){
		  x=x,y=y;
	  }i++;
	  }

	  printf ("%d\n%d",x,y);
	
		
   return 0;
}
