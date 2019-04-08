int main (){
     int a,b,c,d,e,f,num;
      scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	 while(a!=0){
		 num=0;
         d=d+12;
        num=num+3600*(d-a-1);
		num=num+3600-b*60-c;
        num=num+60*e+f;
        printf("%d\n",num);
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	 }
return 0;
}