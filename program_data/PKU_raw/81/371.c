
int main(int argc, char *argv[])
{
  char a[5][80],(*p1)[],(*p2)[];
  int i,m,n;
  for(i=0;i<5;i++)
   gets(a[i]);
  scanf("%d%d",&m,&n);
  if(m<0||m>4||n<0||n>4)
  printf("error");
  else
  {
       p1=&a[m];
       p2=&a[n];
       for(i=0;i<5;i++)
       {
          if(i==m)
           puts(*p2); 
          else if(i==n) 
           puts(*p1);  
          else
           puts(a[i]);            
       }
  }    
 
  return 0;
}
