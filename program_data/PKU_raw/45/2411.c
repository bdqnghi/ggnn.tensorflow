int main()
{ char zi[50],mu[50];
  int i,j,flag=0,zichang,muchang;
 
 scanf("%s %s",zi,mu);
 zichang=strlen(zi);
 muchang=strlen(mu);
 for(i=0;i<=muchang-zichang;i++)
 { for(j=0;j<=zichang-1;j++)
   { if(zi[j]!=mu[i+j])
     {flag=1;break;}
    }
   if(flag!=1)
   { printf("%d",i);
     break;}
   flag=0;}
 getchar();
 getchar();
}