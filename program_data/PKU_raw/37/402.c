



main()
{
      int s,i,j,*a;
      char q[10000][100];
      char *p[10000];
      void test(char *p);
      scanf("%d\n",&s);
      for(i=1;i<=s;i++) {gets(q[i]);}
      for(i=1;i<=s;i++) {p[i]=q[i];test(p[i]);}

}

void test(char *p)
{
          int m=0,k=0,n,i,j,a[100000]={0},*b;
          char s;
          b=a;
          n=strlen(p);
          for(i=0;i<n;i++) 
          {
                           for(j=0;j<n;j++) if(*(p+i)==*(p+j)) *(b+i)=*(b+i)+1;
          }
          
     
                     for(i=0;*(b+i)!='\0';i++) {if(*(b+i)==1) {s=*(p+i);m=1;break;}}
                     if(m==1) printf("%c\n",s);
                     else printf("no");
          
}
