



main()
{
      int s,i,j;
      char q[10000][100];
      char *p[10000];
      void test(char *p);
      scanf("%d\n",&s);
      for(i=1;i<=s;i++) {gets(q[i]);}
      for(i=1;i<=s;i++) {p[i]=q[i];test(p[i]);}

}

void test(char *p)
{
    int t,m=0,n=0,i,b;
    b=strlen(p);
    for(i=0;i<b;i++) {if((*(p+i)=='_')||(*(p+i)>='a'&&*(p+i)<='z')||(*(p+i)>='A'&&*(p+i)<='Z')||(*(p+i)<='9'&&*(p+i)>='0')) m=m+1;}
    if((*p=='_')||(*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')) n=1;
    if(n>0&&m==b) t=1;
    else t=0;
    printf("%d\n",t);
}
