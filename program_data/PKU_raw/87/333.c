int main(){

  int a,b,c,d,e,f,sum;
  int s,m,h;
   int i=0;
   
   for(i=0;i>=0;i++){
     
	  scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
      if(a==0){
		  break;
	  }
      s=0-c;

	  if(s<0){
		  s+=60;
		  b++;
	  }
	  m=0-b;
	  if(m<0){
		  m+=60;
		  a++;
	  }
	  h=12-a;
	  h+=d;
	  m+=e;
	  s+=f;

	  sum=h*3600+m*60+s;

	  printf("%d\n",sum);
	  
	 }


	return 0;
}