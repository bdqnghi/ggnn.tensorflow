main()
{
      char string[LIU+1],substring[LIU+1],replacement[LIU+1],out[LIU+1];
      int h,i,j,k,n,l,lsub,lreplace,count,heihei=0;
      gets(string);
      gets(substring);
      gets(replacement);
      l=strlen(string);lsub=strlen(substring);lreplace=strlen(replacement);
      for(i=0,n=0;i<l;i++,n++)
      {
              count=0;
              for(j=0;(j<lsub)&&(heihei==0)&&(string[i+lsub-1]!='\0');j++)
              {
                          if(string[i+j]==substring[j])
                          count++;
              }
              if(count==lsub)
              {
                          heihei=1;
                          for(k=0;k<lreplace;k++,n++)
                          {
                                 out[n]=replacement[k];
                          }
                          i=i+lsub-1;n--;
              }
              else
              out[n]=string[i];
      }
      out[l+lreplace-lsub]='\0';
      printf("%s\n",out);
      getchar();
      getchar();
      return 0;
}
