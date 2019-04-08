int main( )
{
  int a,b,c,d,e,f,i,s;
  for(i=0;;i++){
   
	  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		  break;}

	  s=(11-a)*60*60+(60-b)*60+60-c+f+e*60+d*60*60;
	  printf("%d\n",s-60);
  

	 }
	return 0;
}

