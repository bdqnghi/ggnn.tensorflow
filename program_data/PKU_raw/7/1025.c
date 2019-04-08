main()
{
  int i,l1,l2,k,j,g=0,c=0,m=0,t=0;
  char s[256]={'\0'},sub[256]={'\0'},replacement[256]={'\0'},w[1000]={'\0'},z[265]={'\0'};
  scanf("%s %s %s",s,sub,replacement);
  l1=strlen(s);
  l2=strlen(sub);
  for(i=0;t<=l1-1;i=t)
  {
    if(m==0)
    {
    if(s[i]==sub[0]) 
    {
       for(k=0,j=i;k<=l2-1;k++,j++)
       {if(sub[k]==s[j]) c++;}
       if(c>=l2) 
       {
       strcat(w,replacement);
       m++;
       t=t+l2;
       }
       else 
       {z[0]=s[i];
       strcat(w,z);
       t++;}
       c=0;
    }
    else 
       {
         z[0]=s[i];
         strcat(w,z);
         t++;
       }
    }
    else 
    {
      z[0]='\0';
      for(k=i,j=0;k<=l1-1;k++,j++) z[j]=s[k];
      strcat(w,z);break;
    }
  }
  if(m!=0) printf("%s\n",w);
  else printf("%s\n",s);
  getchar();
  getchar();
}