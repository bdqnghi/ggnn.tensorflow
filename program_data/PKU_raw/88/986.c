

int main()
{
    char a[30];
    gets(a);
    char *p=a;
    char *q,*k;
    for(p=a;*p!='\0';p++)
    {
        if(*p>='0'&&*p<='9')
         {
           for(q=p;*q!='\0';q++)
         {
            if(*q<'0'||*q>'9')
            {
               cout<<endl;
               break;
            }
            cout<<*q;
            k=q;
         }
         p=k;
         }
    }
   return 0;
}