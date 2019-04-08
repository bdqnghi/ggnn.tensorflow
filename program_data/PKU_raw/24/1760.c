int main()
{
   char string[1000];
   gets(string);
   int i,len,b[200],m=0,c[200],count=0,max=0,min=0;
   len=strlen(string);
   for(i=0;i<len;i++)
   {
      if(string[i]==' '||string[i]==',')
	  {
        c[m]=i;
        m++;
        count++;
	  }
   }
   if(count>=2)
   {
      for(i=1;i<count;i++)
	  {
         b[0]=c[0];
         b[i]=c[i]-c[i-1]-1;
         b[count]=len-c[count-1]-1;
	  }
     for(i=0;i<=count;i++)
	 {
        if(b[i]>b[max])
         max=i;
	 }
     for(i=0;i<=count;i++)
	 {
        if(b[i]<b[min]&&b[i]!=0)
          min=i;
	 }
     if(max==0)
	 {
       for(i=0;i<c[0];i++)
	   {
         printf("%c",string[i]);
	   }  
	 }
     else if(max==count)
	 {
        for(i=c[count-1]+1;i<len;i++)
		{
           printf("%c",string[i]);
		}
	 }
     else
	 {
        for(i=c[max-1]+1;i<c[max];i++)
		{
        printf("%c",string[i]);
		}
	 }
     printf("\n");
     if(min==0)
	 {
       for(i=0;i<c[0];i++)
	   {
         printf("%c",string[i]);
	   }
     }
     else if(min==count)
     {
        for(i=c[count-1]+1;i<len;i++)
		{
          printf("%c",string[i]);
		} 
     }
     else
	 {
       for(i=c[min-1]+1;i<c[min];i++)
	   {
          printf("%c",string[i]);
	   }
     }
      printf("\n");
   }
   else  if(count==1)
   {
       if(c[0]>len-c[0]-1)
	   {
          for(i=0;i<c[0];i++)
		  {
             printf("%c",string[i]);
		  }
         printf("\n");
         for(i=c[0]+1;i<len;i++)
		 {
           printf("%c",string[i]);
		 }
         printf("\n");
	   }
       else  if(c[0]<len-c[0]-1)
	   {
          for(i=c[0]+1;i<len;i++)
		  {
             printf("%c",string[i]);
		  }
          printf("\n");
          for(i=0;i<c[0];i++)
		  {
              printf("%c",string[i]);
		  }
          printf("\n");
	   }
   }
   else   if(count==0)
   {
      printf("%s\n",string);
      printf("%s\n",string);
   }
 return 0;
}


