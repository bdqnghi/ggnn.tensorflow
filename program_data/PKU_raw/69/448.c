int main()
{
    int m=0,n=0,p,q,x,y,i;
    char a[250],b[250],c[250];
    scanf("%s",a);
    scanf("%s",b);
    for(p=0;;p++)
    {
    if(a[p]=='\0') break;
    m++;
    }
    for(q=0;;q++)
    {
    if(b[q]=='\0') break;
    n++;
    }
    
    if(m<n)
   {
    c[n]=a[m-1]+b[n-1]-'0';
    for(x=n-2;x>=n-m;x--)
    {
    if(c[x+2]>'9')
    c[x+1]=a[x+m-n]+b[x]-'0'+1;
    else
    c[x+1]=a[x+m-n]+b[x]-'0';
    
    }
    for(x=n-m-1;x>=0;x--)
    {
    if(c[x+2]>'9')
    c[x+1]=b[x]+1;
    else
    c[x+1]=b[x];
    }
    if(c[1]>'9')
    c[0]='1';
    else
    c[0]='0';
    for(x=1;x<=n;x++)
    {
     if(c[x]>'9')               
    c[x]=c[x]-10;
     }
    for(i=0;i<=n-1;i++)
    if(c[i]!='0') break;
    for(x=i;x<=n;x++)
    printf("%c",c[x]);
 
}  
 
if(m>n)
   {
    c[m]=a[m-1]+b[n-1]-'0';
    for(x=m-2;x>=m-n;x--)
    {
    if(c[x+2]>'9')
    c[x+1]=a[x]+b[x+n-m]-'0'+1;
    else
    c[x+1]=a[x]+b[x+n-m]-'0';
    
    }
    for(x=m-n-1;x>=0;x--)
    {
    if(c[x+2]>'9')
    c[x+1]=a[x]+1;
    else
    c[x+1]=a[x];
    }
    if(c[1]>'9')
    c[0]='1';
    else
    c[0]='0';
    for(x=1;x<=m;x++)
    {
     if(c[x]>'9')               
    c[x]=c[x]-10;
     }
    for(i=0;i<=m-1;i++)
    if(c[i]!='0') break;
    for(x=i;x<=m;x++)
    printf("%c",c[x]);
 
} 
  
    if(m==n)
    {
         c[m]=a[m-1]+b[m-1]-'0';
    for(x=m-2;x>=0;x--)
    {
    if(c[x+2]>'9')
    c[x+1]=a[x]+b[x]-'0'+1;
    else
    c[x+1]=a[x]+b[x]-'0';
    }
    if(c[1]>'9')
    c[0]='1';
    else
    c[0]='0';
    for(x=1;x<=m;x++)
    {
     if(c[x]>'9')               
    c[x]=c[x]-10;
     }
   for(i=0;i<=m-1;i++)
   
    if(c[i]!='0') break;
    
   
   
  
    for(x=i;x<=m;x++)
    printf("%c",c[x]);
}
}
    
    