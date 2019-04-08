
void reverse ( )
{
      int i,len,aaa,bbb;
      char num[100],exnum[100];
      char *p;
      gets(num);
      aaa=0;
      if (num[0]=='-')
      {
            len= strlen (num)-1;
            for(i=0;i<=len-1;i++)
            {
                  exnum[len-1-i]=num[i+1];
            }
            aaa=1;
      }
      else
      {
            len=strlen(num);
            for(i=0;i<=len-1;i++)
            {
                  exnum[len-1-i]=num[i];
            }
      }
      if (aaa==1)
      {
            printf("-");
      }
      bbb=0;
      for (i=0;i<=len-1;i++)
      {
            if (exnum[i]=='0')
            ;
            else
            {
                  bbb=1;
                  break;
            }
      }
      for (;i<=len-1;i++)
      {
            printf("%c",exnum[i]);
      }
      if (bbb==0)
      {
            printf("0");
      }
      printf("\n");
}
int main()
{
      int i;
      for (i=1;i<=6;i++)
      {
            reverse();
      }
      return(0);
}
