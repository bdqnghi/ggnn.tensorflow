int main()
{
   char juzi[3000];
   gets(juzi);
   int n=strlen(juzi);
   int i;
   int cishu=0;
   char danci[50][100]={0};
   int m=0;
   int j=0;
   for(i=0; i<n; i++)
   {
	   if(juzi[i]!=' ')
       {
	    danci[m][j]=juzi[i];
		j+=1;
	   }
	   if(juzi[i]==' ')
	   {
	    m+=1;
		j=0;
	   }
   } 
   int chang[50];
   int t;
   for(i=0; i<=m; i++)
   {
	   chang[i]=strlen(danci[i]);
   }
   for(i=0; i<=m; i++)
   {
      for(j=m; j>i; j--)
	  {
	      if(chang[j]>chang[j-1])
		  {
		     t=chang[j];
			 chang[j]=chang[j-1];
			 chang[j-1]=t;
		  }
	  }
   }
   int max=chang[0];
   int min=chang[m];
   cishu=0;
   int sum=0;
   for(i=0; i<=m; i++)
   {
       if(strlen(danci[i]) == max && cishu==0)
	   {
	     printf("%s", danci[i]);
		 cishu+=1;
	   }
   }
   for(i=0; i<=m; i++)
   {
       if(strlen(danci[i]) == min && sum==0)
	   {
	     printf("\n%s", danci[i]);
		 sum+=1;
	   }
   }
    return 0;
}