void main()
{
 char a[40];
 int i=0;
 gets(a);
 printf("\n");
 while(*(a+i)!='\0')
  {
    if(*(a+i)>='0'&&*(a+i)<='9') printf("%c",*(a+i));
    else if(*(a+i+1)>='0'&&*(a+i+1)<='9') printf("\n");
    i++;
   }
}