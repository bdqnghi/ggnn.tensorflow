int main()
{
      char store[300],add1[300]={'\0'},add2[300]={'\0'},sum[300]={'\0'};
      int i,l,j,l1,l2;
      
      scanf("%s",store);
      l=strlen(store)-1;
      for(i=l;i>=0;i--) add1[l-i]=store[i];
      scanf("%s",store);
      l=strlen(store)-1;
      for(i=l;i>=0;i--) add2[l-i]=store[i];
      
      l1=strlen(add1);
      l2=strlen(add2);
      if(l1>l2) 
      {
            for(i=l2;i<=l1;i++) add2[i]='0';
            add1[l1]='0';      
      }
      else 
      {
           for(i=l1;i<=l2;i++) add1[i]='0';
           add2[l2]='0';
      } 
      
      for(i=0; add1[i]!='\0' || add2[i]!='\0'; i++)
      {
            j=(add1[i]-'0')+(add2[i]-'0');
            if(j>=10) add1[i+1]=add1[i+1]+1;
            sum[i]=j%10+'0';
      }
            
      l=strlen(sum);
      for(i=l-1;i>=0;i--) if(sum[i]!='0' || i==0) break;
      for(;i>=0;i--) printf("%c",sum[i]);
      return 0;
} 