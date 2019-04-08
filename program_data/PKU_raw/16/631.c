int main()
{
   int s,k,a,b,c,d;
   scanf("%d",&s);
   a=(s-s%1000)/1000;
   b=(s%1000-s%100)/100;
   c=(s%100-s%10)/10;
   d=s%10;
   k=d*1000+c*100+b*10+a;
   if(a==0)
	   if(b==0)
		   if(c==0)
			   printf("%d",d);
		   else printf("%d%d",d,c);
	   else printf("%d%d%d",d,c,b); 
   else printf("%d%d%d%d",d,c,b,a);

   
   
   



   return 0;

}