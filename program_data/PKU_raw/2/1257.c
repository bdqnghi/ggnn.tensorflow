
struct data{
int code;
char author[20];
};
struct letter{
char let;
int count;
};

int main()
{
int n,i,j,k,t,max;
struct data a[100];
struct letter l[26];

scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i].code);        
gets(a[i].author);
}
for(i=0;i<26;i++)
{
l[i].let=i+65;              
l[i].count=0;
}

for(i=0;i<n;i++)
{
for(j=0;a[i].author[j]!='\0';j++)             
{
for(k=0;k<26;k++)
{
if(a[i].author[j]==l[k].let)
l[k].count++;
}
}
}
   max=0;
   for(k=0;k<26;k++)                        {
   if(l[k].count>max)
   { max=l[k].count;
   t=k;}
   }

   printf("%c\n",l[t].let);
   printf("%d\n",l[t].count);
   for(i=0;i<=n-1;i++)               
   {
   for(j=0;a[i].author[j]!='\0';j++)
{
if(a[i].author[j]==l[t].let)
printf("%d\n",a[i].code);
}
   }   

return 0;
}
