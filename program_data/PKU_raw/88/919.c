int main()
{
     char c[31],*p=c;
     int a[31],*q=a,num=0,i;
     gets(c);
     for(; *p!='\0'; p++)
     {
           if(*p>='0' && *p<='9')
           {
                *q=(*p)-'0';
                p++;
                while(*p>='0' && *p<='9')
                {
                              *q=(*q)*10+(*(p++)-'0');
                }
                num=1+num;
                q=1+q;
           }
     }
     for(i=0,q=a; i<num; i++,q++)
     {
     cout<<*q<<endl;
     }
     return 0;
}
