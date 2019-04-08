main()
{
     char str[1001];
     int a=1,i;
     scanf("%s",str);
     for(i=0;i<strlen(str);i++)
     {
         if(str[i]<='z' && str[i]>='a') str[i]=str[i]-'a'+'A';                     
     }
     for(i=1;i<=strlen(str);i++)
     {
         if(str[i]==str[i-1]) a++;
         else {printf("(%c,%d)",str[i-1],a);a=1;}            
     }
}