

main()
{
  char  str1[251],str2[251];
  int   str3[252];
  int k,t;
  scanf("%s %s",str1,str2);
  int i=strlen(str1)-1;
  int j=strlen(str2)-1;
  k=0;
  str3[0]=0;
 while(i>=0||j>=0)
 {  if(i>=0&&j>=0)
    t=str1[i]+str2[j]+str3[k]-'0'-'0';
    else {if(i<0) t=str2[j]+str3[k]-'0';
         else t=str1[i]+str3[k]-'0';}
   if(t>9)
    {str3[k]=t-10;
    str3[k+1]=1;}
   else
   {str3[k]=t;
    str3[k+1]=0;}
    j--;
    i--;
    k++;
  }
 for(;k>0;k--)
  if(str3[k]!=0)
   break;
  for(;k>=0;k--)
  printf("%d",str3[k]);


}