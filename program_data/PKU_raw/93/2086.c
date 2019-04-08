int main()
{
    int i;
	scanf("%d",&i);
	if(i%3==0)

	 {
 printf("3");
     if(i%5==0)
		 printf(" 5");
	      if(i%7==0)
		    printf(" 7");
	 }
	 if(i%3>0)
     {if(i%5==0)
	 {printf("5");
	      if(i%7==0)
			  printf(" 7");}
	 if(i%5>0)
	 {if(i%7==0)
			  printf("7");}
	 }
	 if(i%3!=0 && i%5!=0 && i%7!=0)
		 printf("n"); 
return 0;
}