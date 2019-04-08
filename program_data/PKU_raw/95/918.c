int main()
{
   int i,num=0,l1,l2;
   char str1[80],str2[80];
   gets(str1);
   gets(str2);
   l1=strlen(str1);
   l2=strlen(str2);
   for(i=0;i<l1;i++)
   {        if(str1[i]>='A' && str1[i]<='Z') str1[i]=str1[i]+32;
            if(str2[i]>='A' && str2[i]<='Z') str2[i]=str2[i]+32;

          if(str1[i]==str2[i])
         {num++;continue;}
      else if(str1[i]<str2[i]) {cout<<'<'; break;}
      else if(str1[i]>str2[i]) {cout<<'>';break;}
      

  }if(num==l1) cout<<'=';
 return 0;

}