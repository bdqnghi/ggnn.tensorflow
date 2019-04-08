void main()
{
   char *a;
   int i,n=0,j=0,*b;
   a=(char*)malloc(30*sizeof(char));
   b=(int*)malloc(30*sizeof(int));
   for(i=0;i<30;i++)
   {*(a+i)='\0';*(b+i)='\0';scanf("%c",a+i);}
   
   for(i=0;*(a+i)!='\0';i++)
	{   if(*(a+i)<':'&&*(a+i)>'/') 
	 printf("%c",*(a+i));
            if(*(a+i)>=':'||*(a+i)<='/'&&*(a+i+1)<':'&&*(a+i+1)>'/')
                  printf("\n"); 
             }




}