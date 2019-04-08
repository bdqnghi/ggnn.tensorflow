int main()
{
    char a[1000],b[1000];
    int i,j,n,m,x,y,l=0,q,p,s,w;
    scanf("%s %s",a,b);
    m=strlen(a);
    n=strlen(b);
    for(i=0;i<n;i++)
       {if(l>=m)break;
        if(a[l]==b[i]){l++;if(l==1)x=i;}
        else l=0;
       }
    printf("%d",x);
}
    
