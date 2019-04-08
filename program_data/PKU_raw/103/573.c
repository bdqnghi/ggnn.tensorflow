main()
{ int j,n;
      char str1[1001],str2[1001];
 gets(str1);
 for(j=0;;j++) 
 {if(str1[j]=='\0')
          { str2[j]='\0'; break;}
  if(str1[j]>='a'&&str1[j]<='z')
  str2[j]=str1[j]-'a'+'A';
  else str2[j]=str1[j];}

 for(j=0;;j=j+n)
 {if(str1[j]=='\0')
          { str2[j]='\0'; break;}
 
  for(n=0;;n++)
 if(str2[j]!=str2[j+n])
  {printf("(%c,%d)",str2[j],n);
 break;}}

   
}
