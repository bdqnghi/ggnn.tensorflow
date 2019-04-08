void main()
{
int i;
char a[100],*p;
gets(a);
p=a;
for(i=0;*(p+i)!='\0';i++)
{
if((*(p+i)>=48)&&(*(p+i)<=58)){printf("%d",*(p+i)-48);}
else{printf("\n");}
}
}