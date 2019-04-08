
int main(int argc, char *argv[])
{
  int i,t,j=-1,x=0;
  int b[200]={0};
  int c[200]={0};
  char a[5000]={'\0'};
  gets(a);
  for(i=0;i<5000;i++)
    {
      if(a[i]=='\0')
       {c[x+1]=i+1;
        b[x]=i-j-1;
        x=x+1;
        j=i;
         break;}
      if(a[i]==' ')
       {c[x+1]=i+1;
        b[x]=i-j-1;
        x=x+1;
        j=i;}
    }
    for(i=0;i<200;i++)
    {
      if(b[i]==0)
       break;
      if(b[i]>b[0])
      {t=b[0];
      b[0]=b[i];
      b[i]=t;
      t=c[0];
      c[0]=c[i];
      c[i]=t;
      }
    }
    
    for(i=c[0];i<c[0]+b[0];i++)
    printf("%c",a[i]);
    printf("\n");
     for(i=0;i<200;i++)
    {
      if(b[i]==0)
       break;
      if(b[i]<b[0])
       {t=b[0];
      b[0]=b[i];
      b[i]=t;
      t=c[0];
      c[0]=c[i];
      c[i]=t;
      }
    }
   for(i=c[0];i<c[0]+b[0];i++)
    printf("%c",a[i]);
    printf("\n");
  return 0;
}

