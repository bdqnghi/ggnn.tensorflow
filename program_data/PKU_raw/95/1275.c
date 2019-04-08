main()
{
      char s1[80],s2[80];
      gets(s1);
      gets(s2); 
      int i=0;int j=0; 
      while (s1[i]!='\0'){if(s1[i]>='a'&&s1[i]<='z')s1[i]=s1[i]+'A'-'a';i++;}
      while (s2[j]!='\0'){if(s2[j]>='a'&&s2[j]<='z')s2[j]=s2[j]+'A'-'a';j++;}
      if (i<j){int temp=j;j=i;i=temp;} //?j?????? 
      int flag=0; 
      for (int t=0;t<i;t++)
      {
          if (s1[t]>s2[t]){printf(">");flag=1;break;} 
          if (s1[t]<s2[t]){printf("<");flag=1;break;} 
         
      } 
      if (flag==0)printf("="); 
}
