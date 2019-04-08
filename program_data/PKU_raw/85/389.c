int j=0;
void shuchu(int k)
{
  if(k!=0)
  printf("yes\n");
 else
  printf("no\n");
}
void decide(char t[])
{
int de=0,j=0;
 if(t[0]<='9'&&t[0]>='0')
  {
    de=0;
    
   }
else
{
 while(t[j]!='\0')
 {
   if((t[j]<='9'&&t[j]>='0')||(t[j]<='z'&&t[j]>='a')||(t[j]<='Z'&&t[j]>='A')||(t[j]=='_'))
    {
      de=1;
  j++;
     }
else
 {de=0;
  break;}
  }
}
  shuchu(de);
 
} 
    
  
int main()
{
  int n;
scanf("%d",&n);
int i;
char u[100][100];
for(i=0;i<n;i++)
{
  scanf("%s",u[i]);
}
for(i=0;i<n;i++)
{
    decide(u[i]);
}
return 0;
}

