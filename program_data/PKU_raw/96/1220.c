
int sn(char s)
{
    char *p;
    p=&s;
    return atoi(p);
}
int yu=0;
void chufa(char *p1,char*p2)
{
     int l1=strlen(p1);
     if(l1==1)
     {
              p2[0]='0';
              yu=sn(p1[0]);
     }
     for(int i=0;i<l1-1;i++)
     {
             int flg=0;
             if(i==0) flg=1;
             int temp=0;
             temp=(flg*10*sn(p1[i])+sn(p1[i+1])+yu*10)%13;
             p2[i]='0'+(flg*10*sn(p1[i])+sn(p1[i+1])+yu*10-temp)/13;
             yu=temp;
     }
}
main()
{
      char s[100];
      gets(s);
      int len=strlen(s);
      char shang[len-1];
      chufa(s,shang);
      for(int i=0;;i++)
      {
              if(i==0&&shang[i]=='0')
              if(len==1||len==2)
              printf("%c",shang[i]);
              else continue;
              else if(i!=len-1) printf("%c",shang[i]);
              if(i==len-1)
              break;
              
      }
      printf("\n%d",yu);
          
}
