int main(){
   char s[100];
   char *p,c;
   int len;
   gets(s);
   len=strlen(s);
   c=*s;
   for (p=s;p<s+len-1;p++)
	   *p=*p+*(p+1);
       *p=*p+c;
     for (p=s;p<s+len;p++)
    	 cout<<*p;
     return 0;
}