void main()
{
int a,i,j,n,m,k;
char *p,*q;
scanf("%d\n",&n);
for(a=0;a<n;a++)
{
p=(char*)malloc(100000*sizeof(char));
gets(p);
q=p;
k=1;
for(i=0;*(p+i)!='\0';i++)
{
for(j=0,m=0;*(q+j)!='\0';j++)
{
if(*(q+j)==*(p+i)){m++;}
}
if(m==1){k=0;printf("%c\n",*(p+i));break;}
}
if(k==1){printf("no\n");}
}
}