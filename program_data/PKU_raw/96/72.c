main()
{
      int d,l,s,i,r=0,p,q;
      char a[10000],b[10000];
      scanf("%s",a);
      l=strlen(a);
      r=a[0]-'0';
      if((a[0]-'0')*10+a[1]-'0'<=13&&l==2)
      {q=10*r+a[1]-'0';
      r=q%13; 
      printf("0\n%d",r);}
      else if(l==1)
      {q=a[0]-'0';
      r=q%13;
      printf("0\n%d",r);}
     else 
     {
     
      for(i=1;i<l;i++)
      {
                        q=10*r+a[i]-'0';
                        p=q/13;
                        r=q%13;
                        b[i-1]=p+'0';
      }
      s=strlen(b);
      if(b[0]=='0'&&s>1)
      {{for(i=0;i<s-1;b[i]=b[i+1],i++);}b[s-1]='\0';}
      b[s]='\0';
      printf("%s\n%d",b,r);
      }
}