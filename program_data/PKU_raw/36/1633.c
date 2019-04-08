int main()
{
char a[100]={0};
char b[100]={0};
char c[201]={0};
int i,j,m=0,n=0;
gets(c);
for(i=0;c[i]!=' ';i++)
   a[i]=c[i];
for(j=0;c[i+j+1]!='\0';j++)
   b[j]=c[i+j+1];
if(i!=j){printf("NO");return 0;}
else  for(i=0;a[i]!='\0';i++)
          n=n+a[i]-b[i];
for(i=0;a[i]!='\0';i++)
         {for(m=0,j=0;b[j]!='\0';j++)
            if(a[i]==b[j])m=1;
          if(m==0||n!=0){printf("NO");break;}}
       if(m==1&&n==0)printf("YES");
 return 0;
}                