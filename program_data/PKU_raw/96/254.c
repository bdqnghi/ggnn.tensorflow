main()
{
   char a[100];
   int b,c,d,i;
   scanf("%s",a);
   if((a[1]=='\0')||((a[2]=='\0')&&(a[0]=='1')&&(a[1]<'3')))printf("0\n%s",a);
   else
   {                                                                                                             
   if((a[0]=='1')&&(a[1]<'3'))
   {
      b=(a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0');
      i=2;
   }
   else
   {
      b=(a[0]-'0')*10+(a[1]-'0');
      i=1;
   }
   while(a[i]!='\0')
   {
      c=b/13;
      printf("%d",c);
      d=b%13;
      i++;
      b=d*10+a[i]-'0';
   }
   printf("\n%d",d);
   }
   getchar();
   getchar();
   getchar();
   getchar();
}                    
                                               
      
