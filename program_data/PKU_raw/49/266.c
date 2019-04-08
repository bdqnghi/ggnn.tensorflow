int main()
{
char a[500],*p,*p1;
int i,j,n;
scanf("%s",a);
n=strlen(a);

for(i=2;i<=n;i++)
    {
      for(p=a;p<=a+n-i;p++)
         {
          for(p1=p;p1<p+i;p1++)
              {
               if(*p1!=*(p+(p+i-p1-1)))
                break;
               }
          if(p1==p+i)
              {for(j=0;j<i;j++) printf("%c",*(p+j));
                printf("\n");}
           }
       }
return 0;
}

