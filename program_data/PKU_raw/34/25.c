void main()
{
   int i;
   char str[5]={'E','n','d'};
   scanf("%d",&i);
   while(i!=1)
   {
	   if(i%2==0)
	   {
		   printf("%d/2=%d\n",i,i/2);
		   i=i/2;
	   }
	   else
	   {
		   printf("%d*3+1=%d\n",i,i*3+1);
		   i=i*3+1;
	   }
   }
   printf("%s",str);
}
