int main()
{
    char str1[80],str2[80];
  int l1,l2,l,i,t[80]={0};
  gets(str1);
  gets(str2);
  l1=strlen(str1);
  l2=strlen(str2);
  if(l1>=l2)  
  l=l2;
  else l=l1;
  for(i=0;i<=l-1;i++)
  {
    
    if((str1[i]>=65)&&(str1[i]<=90))
    str1[i]=str1[i]+32;
    
   
    
    if((str2[i]>=65)&&(str2[i]<=90))
    str2[i]=str2[i]+32;
   }
  for(i=0;i<=l-1;i++)
  {
       if(str1[i]==str2[i])
       t[i]=1;
       else
       {
            if(str1[i]>str2[i])
            t[i]=2;
            else
            t[i]=3;
            
       }
  }
   i=0;
   while((t[i]==1)&&(i<=l-2))
   i++;
   
   if(t[i]==1) printf("=");
   else if(t[i]==2) printf(">");
   else if(t[i]==3) printf("<");
      
   
   return 0;
}
   