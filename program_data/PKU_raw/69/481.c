int main()
{
   char str1[251]={'0'},str2[251]={'0'},jin='0';
   int a,b,i,flag=0;
   scanf("%s",&str1);
   scanf("%s",&str2);
   if (str1[0]=='0' && str2[0]=='0' && strlen(str1)==1 && strlen(str2)==1)
   {
       printf("0");
       return 0;
   }
   if (strlen(str1)>=strlen(str2))
   {
       a=strlen(str1); b=strlen(str2);
       for (i=a-1;i>=0;i--)  str2[i]=str2[i-a+b];
       for (i=0;i<a-b;i++) str2[i]='0';
   }
   else
   {
       a=strlen(str2); b=strlen(str1);
       for (i=a-1;i>=0;i--)  str1[i]=str1[i-a+b];
       for (i=0;i<a-b;i++) str1[i]='0';
   }
   for (i=a-1;i>=0;i--)
   {
       str1[i]=str1[i]+str2[i]+jin-'0'-'0';
       jin='0';
       if (str1[i]>'9')
       {
           jin='1';
           str1[i]=str1[i]-(':'-'0');
       }
   }
   if (jin=='1')
   {
       printf("1");
       for(i=0;i<=a-1;i++) printf("%c",str1[i]);
   }
   else
   {
       for(i=0;i<=a-1;i++)
       {
           if(str1[i]=='0' && flag==0) continue;
           else
           {
               flag=1;
               b=i;
           }
           break;
       }
   for(i=b;i<=a-1;i++) printf("%c",str1[i]);
   }
   return 0;
}
