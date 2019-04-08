char a[200];
char b[200];
void main()
{
     gets(a);
     char *p =a;
     char *q =b;
     scanf("%s",&a);

     int n=strlen(a);
     b[n]='\0';
    
     for(p=a;p<a+n-1;p++)
     {
                       *q=*p+*(p+1);
                       q++;
     }
     *q= *a+ *p;
     printf("%s",b);
     
}
