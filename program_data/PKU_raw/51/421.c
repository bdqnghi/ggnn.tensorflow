int main()
{
    char a[500],b[500][5],c[500][5];
    int n,leng,i,num[500]={0},k,j,max;
    scanf("%d\n",&n);
    gets(a);
    leng=strlen(a);
	for(i=0;i<=leng-n;i++)
	    {
	    for(j=0;j<n;j++)
	       {
	           b[i][j]=a[i+j];
		   }
		   b[i][j]='\0';
	    }
    strcpy(c[0],b[0]);
    k=1;
    
	for(i=0;i<=leng-n;i++)
       {
           for(j=0;j<k;j++)
              {
                   if(strcmp(c[j],b[i])==0)  
				   {
				      num[j]++;
				      break;
			       }
			  
			  
			  }
			if(j==k)
			{
			    strcpy(c[j],b[i]);
			    num[j]++;
			    k++;
			}


       }        
    max=num[0];
	for(i=0;i<k;i++)
   {
       if(num[i]>max) max=num[i];
   
   
   }
   
   if(max>1)
   {printf("%d\n",max);
   for(i=0;i<k;i++)
   {
      if(num[i]==max)
      printf("%s\n",c[i]);
   
   
   }}
   else printf("NO");
   return 0;
   
   



}