int main()
{
     int i,j,n,m,temp,arrive[1600],leave[1600],times[1001]={0};
     char c;
     c=getchar();
     while(c!=EOF)
     {
       n=0;
       while(c!='\n')
       {
         m=c-'0';
         temp=0;
         while((m<=9)&&(m>=0))
         {
           temp=temp*10+m;
           c=getchar();
           m=c-'0';
          }
          arrive[n]=temp;
          n++;
          if(c==',')
	  c=getchar();
		  
         }
	c=getchar();
       n=0;
       while(c!='\n')
       {
         m=c-'0';
         temp=0;
         while((m<=9)&&(m>=0))
         {
           temp=temp*10+m;
           c=getchar();
           m=c-'0';
          }
          leave[n]=temp;
          n++;
          if(c==',')
	   c=getchar();
         }
         for(i=0;i<1000;++i)
           times[i]=0;
	for(i=0;i<n;i++)
	{
		for(j=arrive[i];j<leave[i];j++)
			times[j]++;
	}
	int max=0;
	for(i=0;i<1000;i++)
	{
		if(max<times[i]) max=times[i];
	}
	printf("%d %d\n",n,max);
         while(c=='\n')
	  c=getchar();
		 
      }
}

