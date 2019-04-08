void main()
{
   long int a,b,i,j=0,r,t=0,d[10000];
   char c[100];
   scanf("%ld %s %ld",&a,c,&b);
   r=strlen(c);
   for(i=0;i<r;i++)
   {	  
	   if(c[i]>=65 && c[i]<=90 )
	       c[i]=c[i]-55;
	   else if( c[i]<=122 && c[i]>=97)
		   c[i]=c[i]-87;
	   else 
           c[i]=c[i]-'0';
	   if((r-i-1)!=0)
	      t=t+c[i]*(int)pow(a,r-i-1);
	   else
		   t=t+c[i];
   }
   while(t>=b)
   {
	   d[j]=t%b;
	   t=t/b;
	   j=j+1;
   }
   d[j]=t;
   for(i=j;i>=0;i--)
   {
	   if(d[i]>=0 && d[i]<=9)
	          printf("%d",d[i]);
	   else
	          printf("%c",d[i]+55);
   }
   printf("\n");
}