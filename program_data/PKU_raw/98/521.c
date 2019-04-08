int main()
{  int n,i,j,k,t;
   char word[40];

   scanf("%d",&n);

   for(i=0,t=81;i<n;i++)
   {scanf("%s",word);
     k=strlen(word);
	 if(t-k-1>=0) 
	  { if(t==81) printf("%s",word);
		 else printf(" %s",word);
       t=t-k-1;
	  }
	 else  {printf("\n");
	        t=81-k-1;
		    printf("%s",word);}   
   }
     printf("\n");
    return 0;
}