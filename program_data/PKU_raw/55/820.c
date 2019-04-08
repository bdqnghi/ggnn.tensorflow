int main()
{
      long k=0,a,b,i,h=0,c;
      unsigned int e[100];
      char n[100];
      long l[10000];
      long t[10000];
      scanf("%d %s %d",&a,n,&b);
      c = strlen(n);
      for(i=0;i<=c-1;i++)
      {
            if(n[i]>='0'&& n[i]<='9')
            n[i]=n[i]-('0'-0);
            if(n[i]<='Z' && n[i]>='A')
            n[i]=n[i]-('A'-10);
            if(n[i]>='a' && n[i]<='z')
            n[i]=n[i]-'a'+10;
            h=a*h+n[i];      
      }
      if(h==0)
      printf("0");
      for(i=0;h>0;i++)
      {
            e[i]=h%b;
            h=h-e[i];
            h=h/b;
            k=k+1;
      }
      for(i=0;i<=k-1;i++)
      {
            n[i]=e[k-1-i];
            if (n[i]>9)
            n[i]=n[i]+'A'-10;
            else
            n[i]=n[i]+'0';
      }
      n[k]='\0';
      printf("%s\n",n);
      getchar();
      getchar();
      getchar();
      getchar();
return 0;
}