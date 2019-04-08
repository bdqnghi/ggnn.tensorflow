void main()
{
    int l=0,max=0,min=100,i=0,k;
    char m[1000];
    int max1, min1;
   
    max1=0;
    min1=0;
    gets(m);
    k=strlen(m);
    
    for (i=0;i<k;i++)
    {
    	    l++;
    		if ((m[i+1]==' ')||(i==k-1))
    		{
    			if (l>max)
    		    {
    		    	max=l;
    		    	max1=i-l+1;
    		    }
    		    if (l<min)
    		    {
    		    	min=l;
    		    	min1=i-l+1;
    		    }
    			l=0;
    			i++;
    		}    		
    }
    for(i=max1;i<max1+max;i++)
   {
   	printf("%c",m[i]);
   }
   printf("\n");
   for(i=min1;i<min1+min;i++)
   {
   	printf("%c",m[i]);
   }
}
