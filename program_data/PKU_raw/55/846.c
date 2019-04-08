main()
{
int a,c,d,e,f,l,x,i;
char b[40000];
scanf("%d %s %d",&a,b,&c);
l=strlen(b);
if(b[0]=='0')
printf("0\n");
else
{
    for(d=0;d<l;d++)
    {
                    if(b[d]>='A' && b[d]<='Z')
                    b[d]=b[d]-'A'+'a';
    }
    x=0;
    for(e=0;e<l;e++)
    {
             if(b[e]>='a')
             f=b[e]-'a'+10;
             else
             f=b[e]-'0';
             x=f+x*a;
    }
    int g[40000];
    for(e=0;x!=0;e++)
    {
           g[e]=x%c;
           x=x/c;
     }
    char h[40000];
    for(i=0;i<e;i++)
    {
           if(g[i]<10)
           h[e-i-1]=g[i]+'0';
           else
           h[e-i-1]=g[i]+'A'-10;
     }
     h[e]='\0';
     printf("%s",h);
}
getchar();
getchar();
}
    
    
    
    
    
    
    
    
    
    
    
    
             
    