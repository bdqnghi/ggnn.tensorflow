int main()
{
   int a,b,c,n;
   scanf("%d %d %d",&a,&b,&c);
   if(((a%4==0)&&(a%100!=0))||(a%400==0))
   {
	      if(b==1)
			  n=c;
		  else if(b==2)
			  n=31+c;
		  else if(b==3)
			  n=60+c;
		  else if(b==4)
			  n=91+c;
		  else if(b==5)
			  n=121+c;
		  else if(b==6)
			  n=152+c;
		  else if(b==7)
			  n=182+c;
		  else if(b==8)
			  n=213+c;
		  else if(b==9)
			  n=244+c;
		  else if(b==10)
			  n=274+c;
		  else if(b==11)
			  n=305+c;
		  else
			  n=336+c;
   }
   else
   {
	      if(b==1)
			  n=c;
		  else if(b==2)
			  n=31+c;
		  else if(b==3)
			  n=59+c;
		  else if(b==4)
			  n=90+c;
		  else if(b==5)
			  n=120+c;
		  else if(b==6)
			  n=151+c;
		  else if(b==7)
			  n=181+c;
		  else if(b==8)
			  n=212+c;
		  else if(b==9)
			  n=243+c;
		  else if(b==10)
			  n=273+c;
		  else if(b==11)
			  n=304+c;
		  else
			  n=335+c;
   }
   printf("%d",n);
   return 0;
}

