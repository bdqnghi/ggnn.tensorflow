void main()
{char a[50],b[50];
 int c,d,n,i,s;
 char *p=a;
 for(n=0;n<=5;)
   { scanf("%c",p+n);
     if(*(p+n)==' ')
       break;
     else
      n=n+1;}
   *(p+n)=0;
 gets(b);
 c=strlen(a);
 d=strlen(b);
 for(n=0;n<=d-1;)
 {if(b[n]!=a[0])
  n++;
  else
   {for(i=n;i<n+c;i++)
     {if(b[i]==a[i-n])
      s=0;
      else
        {s=1;break;}}
    if(s==0)
     {printf("%d",n);
       break;}
    else n=n+1;}
}
}
     
 
