void main()
{
char a[100],b[100];
int c[100],d[100],sumc=0,sumd=0,lena,lenb,i;
gets(a);
gets(b);
lena=strlen(a);
lenb=strlen(b);
for(i=0;i<lena;i++)
   {c[i]=a[i];
    d[i]=b[i];
	if(c[i]>64&&c[i]<91) c[i]=c[i]+32;
	else if(d[i]>64&&d[i]<91) d[i]=d[i]+32;
	sumc=sumc+c[i];
	sumd=sumd+d[i];
   }
if(sumc>sumd)
 printf(">");
else if(sumc<sumd)
 printf("<");
else if(sumc==sumd)
 printf("=");
}
