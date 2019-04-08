int main(int argc, char* argv[])
{
	int a,m;
	m=0;
	
	scanf("%d",&a);
	
	
   if(a%3==0)
   
   m=m+1;
   if(a%5==0)
  
   m=m+10;
   if(a%7==0)
   
   m=m+100;
   if(m==0)
	printf("n");
   if(m==1)
   printf("3");
   if(m==10)
	   printf("5");
   if(m==100)
   printf("7");
   if(m==11)
   printf("3 5");
   if(m==101)
   printf("3 7");
   if(m==110)
   printf("5 7");
   if(m==111)
	   printf("3 5 7");

   return 0;
}
