int main()
{char *p,*q;
 int a,i,j;
q=p=malloc(100);
gets(q);
a=i=0;
while(*(p+i)!='\0')
{while((*(p+i)==' ')&&(*(p+i+1)==' '))
{j=i+1;
while(*(p+j)!='\0')
{*(p+j)=*(p+j+1);j++;}}
i++;}
puts(p);
return 0;}