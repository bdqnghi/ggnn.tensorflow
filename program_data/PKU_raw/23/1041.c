void main()
{
char a[100],*p=a,*t=a;
int n;
gets(a);
n=strlen(a);
    for(p=p+n-1;p>=a;)
       {
        if((*p)==' ')
             { for(t=p+1;(*t)!='\0';t++)
               printf("%c",*t);
               printf(" ");
               *p='\0';
                p--;}
        else p--;}
p=a;
printf("%s",p);
}
      