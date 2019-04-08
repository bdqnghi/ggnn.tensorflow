int main()
{
    int a,b;
    char n[100];
    scanf("%d %s %d",&a,n,&b);
    int c[100];
    int e[100];
    int d=0; //n?????? 
    int i,j;
    for(i=0;i<100&&n[i]!='\0';i++)
    {
     if(n[i]>='a'&&n[i]<='z')
     c[i]=n[i]-'a'+10;
     else if(n[i]>='A'&&n[i]<='Z')
     c[i]=n[i]-'A'+10;
     else if(n[i]>='0'&&n[i]<='9')
     c[i]=n[i]-'0';
     d=d*a+c[i];                                                                                                                  
    }
    if(d==0)
    printf("%d",d);
    for(i=0;i<100&&d!=0;i++)
    {
     e[i]=d%b;
     d=d/b;                                  
    }
    for(j=0;j<i;j++)
    {
    if(e[i-j-1]<=9&&e[i-j-1]>=0)
    n[j]=e[i-j-1]+'0';
    else if(e[i-j-1]>=10)
    n[j]=e[i-j-1]-10+'A';
    }
    n[i]='\0';
    puts(n);
    getchar();
     getchar();
     getchar();
    getchar();
                                             
    
    
    
    
    
    
    
    }
