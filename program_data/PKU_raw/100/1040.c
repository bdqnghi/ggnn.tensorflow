
int main()
{
   char z[300];
   int sum,i,num=0;
 
   char n;
   gets(z);
   for(n='a';n<='z';n++)
   {
	   sum=0;
	   for(i=0;i<strlen(z);i++)
	   {
		   if(z[i]==n)
		   {
			   sum++;
		   }
		  
		   num+=sum;
	   }
       if(sum!=0)
		   {
			   printf("%c=%d\n",n,sum);
		   }
   }
   if(num==0)
   {
	   printf("No");
   }

	   

   return 0;
 
 
}