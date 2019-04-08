void main()
{char a[100],b[100];
 int i,j,k,t,p;
 scanf("%s %s",a,b);
 k=strlen(a);
 t=strlen(b);
 if(k!=t)
  printf("NO\n");
 else
  {for(i=0;i<k;i++)
    for(j=0;j<t;j++)
     if(a[i]==b[j])
     {b[j]=' ';p=1;break;}
     else p=0;
    if(p==1) printf("YES\n");
    if(p==0) printf("NO\n");}
}
 