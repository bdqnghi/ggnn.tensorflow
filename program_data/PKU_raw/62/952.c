int main(){
     char a[1000];
     char *p=a;
     int len;

     gets(a);
     len=strlen(a);

     while (p<a+len)
     if ((*p==' ')&&(*(p+1)==' ')) p++;
     else {cout<<*p; p++;}
     return 0;
}