void main()
{int i,j,k;
char ch[100];
gets(ch);
for(i=0;;i++)
{if(ch[i]=='\0') break;}
for(i=i-1,j=0;i>=0;i--)
{if(ch[i]==' ') {for(k=i+1;k<=i+j;k++) printf("%c",ch[k]);printf("%c",ch[i]);j=0;}
else if(i==0)  {for(k=i;k<=i+j;k++) printf("%c",ch[k]);break;}
else j++;}
}