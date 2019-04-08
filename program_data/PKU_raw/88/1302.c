
int main()
{const int maxn=31;
  char c[maxn],*p;

  gets(c);
  p=c;
  while(*p!='\0')
    if(*p>=48 && *p<58)
    { do{
   	    cout<<*p;
        p++;
      }while(*p>47 && *p<58);
      cout<<endl;
    } else p++;

  return 0;
}