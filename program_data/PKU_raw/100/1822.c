
int main()
{

int a[256],i;
int j=0;
char str[256];
for (i=0;i<256;i++) a[i]=0;
gets(str);

i=0;
while(str[i]) 
  a[str[i++]]++;
    for (i='A';i<='Z';i++)
   if (a[i])
   {
     printf("%c=%d\n",i,a[i]);
     j++;
   }
   for (i='a';i<='z';i++)
   if (a[i])
   { 
     printf("%c=%d\n",i,a[i]);
     j++;
    }
   if(j==0)
   printf("No");
return 0;
}
