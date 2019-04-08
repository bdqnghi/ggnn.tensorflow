int main(){
   int i,shi,fen,miao,s,a,b,c,d,e,f;
   for(i=0;;i++){
		   scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	   if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		   break;
	   }
	   shi=d+12-a;
	   if(b>e){
		   shi=shi-1;
		   fen=e+60-b;
	   }else{
		   fen=e-b;
	   }
	   if(c>f){
		   fen=fen-1;
		   miao=f+60-c;
	   }else{
		   miao=f-c;
	   }
	   s=shi*3600+fen*60+miao*1;
	   printf("%d\n",s);
   }
   return 0;
}