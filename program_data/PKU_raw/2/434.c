int main()
{
  char mo='A';
  int a[ASC]={0};
  int i,j,n;

 struct
{ int num;
  char wr[MAX_N+1];
}book[MAX_M];

scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d%s",&book[i].num,book[i].wr);
 for(j=0;book[i].wr[j];j++)
{if(++a[book[i].wr[j]]>a[mo]) mo=book[i].wr[j];}
}
printf("%c\n%d\n",mo,a[mo]);
for(i=0;i<n;i++)
if(strchr(book[i].wr,mo)) printf("%d\n",book[i].num);
return 0;
}
