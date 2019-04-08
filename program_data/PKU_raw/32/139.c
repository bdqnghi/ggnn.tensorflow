void main()
{
   char beijian[200],jian[200],jian2[200],result[200];
   int i=0,j=0,l1,l2,n;
     scanf("%d",&n);
   for(j=0;j<n;j++)
   {
      for(i=0;i<100;i++)
   {
	   jian2[i]=48;
	   result[i]=48;
   }
   jian2[99]=0;
   result[99]=0;
 
   scanf("%s",beijian);
	  scanf("%s",jian);
      l1=strlen(beijian);
      l2=strlen(jian);
	  if(l1==l2)
      {
	  for(i=l1-1;i>=0;i--)
	  {
	     if(beijian[i]<jian[i])
		 {
	        beijian[i]=beijian[i]+10;
	        beijian[i-1]=beijian[i-1]-1;
		 }
 	     result[i]=beijian[i]-jian[i]+48;
	  }
	  result[l1]='\0';
	  }
      else
      {
		  for(i=l1-1;i>=l1-l2;i--) jian2[i]=jian[i-l1+l2];
 	  for(i=l1-1;i>=0;i--)
	  {
		  if(beijian[i]<jian2[i])
		 {
	        beijian[i]=beijian[i]+10;
	        beijian[i-1]=beijian[i-1]-1;
		 }
	     result[i]=beijian[i]-jian2[i]+48;
	  }
	  result[l1]='\0';
      }
	  for(i=0;i<l1;i++)
	  {
		  if(result[i]!=0&&result[i]!=48) break;
	  }
      while(result[i]!='\0') printf("%c",result[i++]);
      printf("\n");
   }
}
