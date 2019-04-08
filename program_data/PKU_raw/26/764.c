int main( )
{ char a[105];
char *p=NULL;
 gets(a);
 for(p=a;*p!='\0';p++)
 { if(*p!=' ') cout<<*p;
 else
 { if(p[1]==' ') ;
 else cout<<*p;
 }
 }
 return 0;
}
