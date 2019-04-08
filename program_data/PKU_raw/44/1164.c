
void reverse(char a[])
{int i,p;
 char t;
 if(a[0]!='-')
 {for(i=0;i<strlen(a)/2;i++)
  t=a[i],a[i]=a[strlen(a)-i-1],a[strlen(a)-i-1]=t;
  p=0;
  while(a[p]=='0') p++;
  for(i=p;i<strlen(a);i++)
  printf("%c",a[i]);
  printf("\n");}
 else
  if(a[1]=='0')  printf("0\n");
  else
  {for(i=1;i<(strlen(a)/2+1);i++)
   t=a[i],a[i]=a[strlen(a)-i],a[strlen(a)-i]=t;
   printf("-");
   p=1;
   while(a[p]=='0') p++;
   for(i=p;i<strlen(a);i++)
   printf("%c",a[i]);
   printf("\n");}

}

int main()
{int i;
 for(i=0;i<6;i++)
 {
  char *p;
  p=(char *)malloc(sizeof(char)*100);
  scanf("%s",p);
  reverse(p);
 }
}