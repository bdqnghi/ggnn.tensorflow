void main()
{
   long m,n,len,i,total=0,t=0;
   char a[100],b[100];
   scanf("%d%s%d",&m,&a,&n);
   len=strlen(a);
   for(i=0;i<len;i++)
   {
       if(a[i]<='9'&&a[i]>='0')
	   {
	      total=total+(a[i]-'0')*pow(m,len-1-i);
	   }
	   else
	   {
	      if(a[i]<='z'&&a[i]>='a')
		  {
	           total=total+(a[i]-'a'+10)*pow(m,len-1-i);
		  }
		  else
		  {
		       total=total+(a[i]-'A'+10)*pow(m,len-1-i);
		  }
	   }
   }
   if(total==0)printf("0\n");
   else
   {
	   for(i=0;total!=0;i++)
   {
       b[i]=total%n;
	   total=total/n;
	   t++;
	   if(b[i]<=9)b[i]=b[i]+'0';
	   else b[i]=b[i]+'A'-10;
   }
   for(i=t-1;i>=0;i--)
   {
      printf("%c",b[i]);
   }
   printf("\n");
   }
}