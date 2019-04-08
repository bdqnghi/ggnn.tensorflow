unsigned long pow(unsigned long a,unsigned long b)
{
    unsigned long temp,sout=1;
    for(temp=1;temp<=b;temp++)
    sout=sout*a;
    return sout;
}
    
main()
{
      unsigned long ip,op,i,lenth,oplenth,cache,test=9999,mod;
      unsigned long dec=0;
      char num[100],wei;
      scanf("%d",&ip);
      scanf("%s",num);
      scanf("%d",&op);
      //printf("%d %s %d\n",ip,num,op);
      lenth=strlen(num);
      for(i=0;i<=lenth;i++)
      {
                          if(num[i]>='a'&&num[i]<='z')
                          num[i]=num[i]-'a'+'A';
      }
      //printf("%s\n",num);
      for(i=0;i<lenth;i++)
      {
                          if(num[i]>='0'&&num[i]<='9')
                          dec=dec+((unsigned long)num[i]-(unsigned long)'0')*pow(ip,lenth-i-1);
                          else
                          dec=dec+(10+(unsigned long)num[i]-(unsigned long)'A')*pow(ip,lenth-i-1);
      }
      for(oplenth=1;test>=op;oplenth++)
      test=dec/pow(op,oplenth-1);
      oplenth--;
      mod=dec;
      //printf("%d\n",dec);
      for(i=0;i<oplenth;i++)
      {
                             cache=mod/pow(op,oplenth-i-1);
                             mod=mod-cache*pow(op,oplenth-i-1);
                             //printf("     %d %d\n",cache,mod);
                             if(cache<=9)
                             printf("%d",cache);
                             else
                             {
                                 wei='A'+cache-10;
                                 printf("%c",wei);
                             }
      }
      getchar();
      getchar();
      return 0;
}
      
