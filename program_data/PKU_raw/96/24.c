main()
{
   char c[100];
   int i,len,flag;
   scanf("%s",c);
   len=strlen(c);
   int a,b;
   b=0;
   if(len==1) printf("0\n%d",c[0]-'0');
   else
   {
	   flag=(c[0]-'0')*10+c[1]-'0';
	   if(len==2&&flag<13)
	   {
	   printf("0\n%d",flag);
	   }
   else
   {
   for(i=0;i<=len-1;i++)
   {
	   a=b*10+c[i]-'0';
	   if(a<13)
	   {
		   c[i]='0';
	       b=a;
	   }
	   else
	   {
	       b=a%13;
	       c[i]=(a-b)/13+'0';
	   }
   }
   if(flag>=13)
   {
	   for(i=1;i<len;i++)
		   printf("%c",c[i]);
	   printf("\n%d",b);
   }
   else
   {
	   for(i=2;i<len;i++)
		   printf("%c",c[i]);
	    printf("\n%d",b);
   }
   printf("\n");
   }
}
}