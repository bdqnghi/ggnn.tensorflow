int main()
{ int i,j,n,c,d,a[26]={0};
int *p1;
char b[100001];
char *p2;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{gets(b);
p1=a;
for(j=0;j<26;j++)
*(p1+j)=0;
j=0;
p2=b;
while (*(p2+j)!='\0')
{d=*(p1+*(p2+j)-97);
d++;
*(p1+*(p2+j)-97)=d;
j++;
}
j=0;c=0;
while (*(p2+j)!='\0')
{if(*(p1+*(p2+j)-97)==1) {printf("%c\n",*(p2+j));c=1;break;}
j++;
}
if(c==0) printf("no\n");
}
return 0;
}