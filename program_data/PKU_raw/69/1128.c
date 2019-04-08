
main()
{
      char X[260],Y[260],Z[260],P[260],K[260],O[260];
      scanf("%s %s",K,O);
      int m,n,s;
      m=strlen(K);
      n=strlen(O);
      int v,d;
      v=0;
      d=0;
       for(int i=0;i<m;i++)
      {
                      if(K[i]=='0') v++;
                      else break;
                      }
     
       for(int i=0;i<m-v;i++)
       {
        X[i]=K[i+v];
       }
       X[m-v]='\0';
       m=m-v;
        for(int i=0;i<n;i++)
      {
                      if(O[i]=='0') d++;
                      else break;
                      }
       
       for(int i=0;i<n-d;i++)
       {
        Y[i]=O[i+d];
       }   
       Y[n-v]='\0';
       n=n-d;
       if(n==0&&m!=0) printf("%s",X);
       else if(m==0&&n!=0) printf("%s",Y);
       else if(n==0&&m==0) printf("%d",0);
       else 
       {
      if(m>n) 
      {
      int i;int p;
          p=0;
          
      for(i=0;i<m;i++)
      {
          X[m-i-1]=X[m-i-1]+p;
          if(i==m-1) break;
          if(i<n)
          {
      if(X[m-i-1]+Y[n-i-1]-'0'>'9')
      {
      p=1;
      Z[i]=X[m-i-1]+Y[n-i-1]-'0'-10;
      }
      else
      {
          p=0;
           Z[i]=X[m-i-1]+Y[n-i-1]-'0';
      }
}
         else 
         {
              if(X[m-i-1]>'9')
               {
      p=1;
      Z[i]=X[m-i-1]-10;
      
      }
      else
       {
          p=0;
           Z[i]=X[m-i-1];
      }
      }
      }
    
         if(X[0]=='9'+1)  s=m+1;
         
      else s=m;
      int t;
      for(t=0;t<m-1;t++)
      {
      if(t<=(n-1)) P[s-1-t]=Z[t];
      else P[s-1-t]=Z[t];
      }
      if(X[0]=='9'+1) 
      {
      P[0]='1';P[1]='0';
      }
      else P[0]=X[0];
      P[s]='\0';
      printf("%s",P);
      }
           if(n>m) 
      {
      int i;int p;
          p=0;
          
      for(i=0;i<n;i++)
      {
          Y[n-i-1]=Y[n-i-1]+p;
          if(i==n-1) break;
          if(i<m)
          {
      if(Y[n-i-1]+X[m-i-1]-'0'>'9')
      {
      p=1;
      Z[i]=Y[n-i-1]+X[m-i-1]-'0'-10;
      }
      else
      {
          p=0;
           Z[i]=X[m-i-1]+Y[n-i-1]-'0';
      }
}
         else 
         {
              if(Y[n-i-1]>'9')
               {
      p=1;
      Z[i]=Y[n-i-1]-10;
      
      }
      else
       {
          p=0;
           Z[i]=Y[n-i-1];
      }
      }
      }
      
         if(Y[0]=='9'+1)  s=n+1;
         
      else s=n;
      int t;
      for(t=0;t<n-1;t++)
      {
      if(t<=(m-1)) P[s-1-t]=Z[t];
      else P[s-1-t]=Z[t];
      }
      if(Y[0]=='9'+1) 
      {
      P[0]='1';P[1]='0';
      }
      else P[0]=Y[0];
      P[s]='\0';
       printf("%s",P);
      }
     if(m==n)
        {
      int i,p,q,h,v,d;
      v=0;
      p=0;
     for(i=0;i<n;i++)
      {
          
          X[m-i-1]=X[m-i-1]+p;
          if(i==n-1) break;
     if(i<m)
          {
      if(Y[n-i-1]+X[m-i-1]-'0'>'9')
      {
      p=1;
      Z[i]=Y[n-i-1]+X[m-i-1]-'0'-10;
      }
      else
      {
          p=0;
           Z[i]=X[m-i-1]+Y[n-i-1]-'0';
      }
}
         else 
         {
              if(Y[n-i-1]>'9')
               {
      p=1;
      Z[i]=Y[n-i-1]-10;
      
      }
      else
       {
          p=0;
           Z[i]=Y[n-i-1];
      }
      }
      }
     
         if(X[0]+Y[0]>='9'+1+'0')  s=m+1;
         else s=m;
  ;
      int t;
      for(t=0;t<m-1;t++)
      {
             P[s-1-t]=Z[t];
       }
      if(X[0]+Y[0]>='9'+1+'0') 
      {
      P[0]='1';P[1]=X[0]+Y[0]-'0'-10;
      }
      else P[0]=X[0]+Y[0]-'0';
      P[s]='\0';
        printf("%s",P
        );           
      
      }
      }

      }

