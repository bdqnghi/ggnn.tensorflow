int main()
{
   char (*a)[10000];
   char b;
   int n,i,flag=0,j,k,r;
   scanf("%d",&n) ;
   getchar();
   a=malloc(n*sizeof(char)*10000);
   for(i=0;i<n;i++)
   {
	   gets(*(a+i));
   }
   for(i=0;i<n;i++)
   {
	   k=strlen(*(a+i));
	   for(j=0;j<k;j++)
	   {
          b=*(*(a+i)+j);
		  for(r=0;r<k;r++)
		  {
			  if(r==j)
				  continue;
			  else
			  {
				  if(b==*(*(a+i)+r))
					  break;
			  }
		  }
		  if(r==k)
		  {
			  printf("%c\n",b);
			  flag=1;
			  break;
		  }
	   }
	   if(flag==0)
		   printf("no\n");
	   flag=0;

   }

}