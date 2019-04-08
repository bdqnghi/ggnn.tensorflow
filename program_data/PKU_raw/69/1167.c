void p(char a[],int l)  //?????0???a=000876??a=876 
{ int i,j;
    for(;a[0]=='0';)
     for(j=0;j<=l-1;j++)
     a[j]=a[j+1];
}
void h(char a[],int l)
{  int i,j;
   char c[260];
   strcpy(c,a);
   for(i=0;i<=l-1;i++)
   a[i]=c[l-1-i];
}
int max(int x,int y)
{   if (x>=y) return x;
    else return y;
}
int k(int x)   
{ if(x=='\0')
   return 0;
  else return (x-'0'); 
}
main()
{   char a[260];
    char b[260];
    char c[260];
    int l1,l2,l3,l,t,m,i;
    scanf("%s %s",a,b);
   
    l1=strlen(a);
    l2=strlen(b);
    p(a,l1);p(b,l2);
   
    l1=strlen(a);
    l2=strlen(b);
    h(a,l1);  h(b,l2);
    l= max(l1,l2);
    
 for(i=l1;i<=l;i++)
  a[i]='\0';
 for(i=l2;i<=l;i++)
  b[i]='\0';  
    
    for(t=0,i=0;i<=l;i++)
{   
    m=(k(a[i])+k(b[i]))%10;
    c[i]=(m+t)%10+'0';
    t=(k(a[i])+k(b[i])+(m+t)/10)/10;
}    

if(c[l]=='0'&&l!=0) c[l]='\0';
else c[l+1]='\0';

l3=strlen(c);
h(c,l3);
printf("%s",c);
getchar();
getchar();
} 
