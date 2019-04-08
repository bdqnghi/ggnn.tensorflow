int main()
{
    int m,n,c[100],d[100],i,j,p,q,t=1,s=0;
    char a[100],b[100];
    scanf("%d %s %d",&m,a,&n);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        c[i]=a[i]-'0';
        else if(a[i]>='a'&&a[i]<='z')
        c[i]=a[i]-'a'+10;
        else if(a[i]>='A'&&a[i]<='Z')
        c[i]=a[i]-'A'+10;
    }   
    p = i;
    for(i=p-1;i>=0;i--)
    {
         s=s+t*c[i];   
         t=t*m;
    }
    if(s==0)
    printf("0");
    else
    {
         for(i=0;s!=0;i++)
    {   
        d[i]=s%n;
        s=s/n;
    }
   q = i;
     for(i=0;i<q;i++) 
     {
        if(d[i]>=0&&d[i]<=9)
        b[i]=d[i]+'0';
        else
        b[i]=d[i]+'A'-10;
     }  
     for(i=q-1;i>=0;i--)
     printf("%c",b[i]);
     }
     printf("\n");
     getchar();
     getchar();
}

