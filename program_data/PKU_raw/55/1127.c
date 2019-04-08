
int main()
{
 int i,j,n,num,sum=0,x,k,o,t,a,b;
 char *p;
  sum=0;
  p=(char*)malloc(sizeof(char)*20);
  scanf("%d %s %d",&a,p,&b);
   for(j=0;j<strlen(p);j++)
   if(*(p+j)<='z'&&*(p+j)>='a')
   *(p+j)-=32;
  
  for(j=0;j<strlen(p);j++)
  {
   if(*(p+j)<='9'&&*(p+j)>='0')
    {num=(int)*(p+j)-48;
     t=strlen(p)-j;
     while(t>1) num*=a,t--;}
   else
    {num=(int)*(p+j)-65+10;
     t=strlen(p)-j;
     while(t>1) num*=a,t--;}
   sum+=num;
  }
  
  
  
  x=sum; k=0;
  while(x/b!=0) k++,x=x/b;
  char *q;
  q=(char*)malloc(sizeof(char)*k);
  x=sum;
  *(q+k+1)='\0';
  while(k>=0)
  {o=x%b;
   if(o<=9&&o>=0)
   {*(q+k)=(char)(o+48);
    x=x/b;
    k--;}
   else
   {*(q+k)=(char)(o+55);
    x=x/b;
    k--;}
  }
  printf("%s\n",q);
 }



