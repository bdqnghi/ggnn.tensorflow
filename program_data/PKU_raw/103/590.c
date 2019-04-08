main()
{     int a,b,c,d;
      c=1;
      char str1[999],str2[999];
      scanf("%s",str1);
      a=strlen(str1);
      for(d=0;d<=a-1;d++)
      {
          if(str1[d]>='a' && str1[d]<='z')
          str2[d]=str1[d]-'a'+'A';
          else
          str2[d]=str1[d];
      }
      for (b=0;b<=a-1;b++)
      {   
          if(str2[b]==str2[b+1])
          c++;
          else
          {
              printf("(%c,%d)",str2[b],c);
              c=1;
          }
      }

}
