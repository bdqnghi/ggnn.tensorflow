main()
{
      char a[250],b[250],c[252];
      scanf("%s",a);
      scanf("%s",b);
      int L1=strlen(a),L2=strlen(b),j=0;                                        /*??????????*/
      for(int i=0;;i++)
      {
           if(L1-i-1<0&&L2-i-1<0)                                               /*??????*/
           {    if(j==1)
                {    c[i]=49;
                     c[i+1]='\0';}
                else
                c[i]='\0';
                break;}
           if(L1-i-1<0) c[i]=b[L2-i-1]+j-48;                                                 /*j??????*/
           else if(L2-i-1<0) c[i]=a[L1-i-1]+j-48;
           else c[i]=a[L1-i-1]+b[L2-i-1]+j-96;
           if(c[i]>=10) 
           {    j=1;
                c[i]=c[i]-10;}
           else j=0;        
           c[i]=c[i]+48;
      }
      int L=strlen(c),m=0;
      for(int i=L-1;;i--)                                                       /*?????0???*/
      {
      if(c[i]==48) m=m+1;
      else break;
      }     
      if(c[0]==48&&L==1) printf("0");
      for(int i=L-m-1;i>=0;i--)
      {
      printf("%c",c[i]);  
      }
      }
