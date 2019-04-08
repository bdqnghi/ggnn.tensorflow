main()
{
      int d,q,r,l,i,m;
      char dividend[10000],quotient[10000];
      scanf("%s",dividend);
      l=strlen(dividend);
      if(l==1)
      printf("%c\n%d",'0',dividend[0]-'0');
else{
      r=dividend[0]-'0';
      for(i=1;i<l;i++)
      {
                      m=dividend[i]-'0'+10*r;
                      q=m/13;
                      r=m%13;
                      quotient[i-1]=q+'0';
      }
      quotient[l-1]='\0';
      if(quotient[0]=='0'&&l>2)
      {for(i=0;i<l;quotient[i]=quotient[i+1],i++);}
      printf("%s\n%d",quotient,r);
    }
}