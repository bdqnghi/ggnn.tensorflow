void main()
{
    char s[1000];
    int j=0,i=0,n,k;
    gets(s);
    n=strlen(s);
    while(i<n)
    {
    	if(s[i]!=' ')
    		{j=j+1;
    		 i=i+1;}
    	else if(j!=0)
                  {printf("%d,",j);
    		  k=j;
    		  j=0;
    		  i++;}
              else i++;
    }
    printf("%d",j);
}
   