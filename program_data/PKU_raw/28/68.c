void main()
{  char s[1000];
   int i,lo,t,p,q,b[100];
   gets(s);
   lo=strlen(s);
   s[lo]=0;
   for(i=0,t=0;i<=lo;i++)
    if(s[i]!=32)
     {b[t]=0;
     for(;;i++)
   {
        if((s[i]!=32)&&(s[i]!=0))
          b[t]=b[t]+1;   
     else {t=t+1;break;}
   }
}
     for(q=0;q<t-1;q++)
     printf("%d,",b[q]);
     printf("%d",b[t-1]);
}
        
       