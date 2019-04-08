int main()
{
    char n[40],y[40],z[40];
    int a,b,c=0,l,i,k;    
    scanf("%d %s %d",&a,n,&b);
    l = strlen(n);
    for (i = 0;i<l;i++)
    {
     if(n[i]>='0'&&n[i]<='9')        
        n[i]=n[i]-'0';
     if(n[i]>='a'&&n[i]<='z')
        n[i]=n[i]-'a'+10;
     if(n[i]>='A'&&n[i]<='Z')   
        n[i]=n[i]-'A'+10;        
    }
    
    for (i = 0;i<l;i++)
    {       
        c = n[i] + a *c ;
    }
    for (k = 0;c!=0;k++)    
    {
     y[k] = c%b;
     c=c/b;
    }
    if (k == 0)
    printf("0\n");
    else 
    {
     for (i = 0;i<k;i++)
     {
     z[i]=y[k-i-1];   
     }
     for (i = 0;i<k;i++)
     {
     if(z[i]>=0&&z[i]<=9)        
        z[i]=z[i]+'0';
     if(z[i]>9&&z[i]<=36)
        z[i]=z[i]-10+'A';          
     }
    z[k]=0;
    
    printf("%s\n",z);
    }
}