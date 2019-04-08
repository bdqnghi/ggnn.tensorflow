int main(){
   int d,m,f,d1,m1,f1;
   int s=0;
   scanf("%d%d%d%d%d%d",&d,&m,&f,&d1,&m1,&f1);
   d1=d1+12;
   while((d!=0)||(m!=0)||(f!=0)||(d1!=12)||(m1!=0)||(f1!=0)){
         s+=(d1-d-1)*3600;
		 s+=m1*60+f1;
		 s+=3600-m*60-f;
		 printf("%d\n",s);
         scanf("%d%d%d%d%d%d",&d,&m,&f,&d1,&m1,&f1);
         d1=d1+12;
		 s=0;
   }
   return 0;

}