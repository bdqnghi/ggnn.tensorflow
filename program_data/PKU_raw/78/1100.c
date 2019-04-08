
int main()
{
    int a, b ,c, d,n1,n2,n3,n4;
    
    for(a=10;a<=50;a+=10)
    {
        for(b=10;b<=50;b+=10)
        {
            for(c=10;c<=50;c+=10)
            {
                for(d=10;d<=50;d+=10)
                if((a+b)==(c+d)&&(a+d)>(b+c)&&(a+c)<b)
                {
                    n1=a>b?a:b;
                    n2=c>d?c:d;
                    n1=n1>n2?n1:n2;
                    n2=40;
                    n3=a<b?a:b;
                    n4=c<d?c:d;
                    n3=n3>n4?n3:n4;
                    n4=n3<n4?n3:n4;
                   
                    if(n1==a)
                    printf("z %d\n",n1);
                    if(n1==b)
                    printf("q %d\n",n1);
                    if(n1==c)
                    printf("s %d\n",n1);
                    if(n1==d)
                    printf("l %d\n",n1);
                    
                     if(n2==a)
                    printf("z %d\n",n2);
                    if(n2==b)
                    printf("q %d\n",n2);
                    if(n2==c)
                    printf("s %d\n",n2);
                    if(n2==d)
                    printf("l %d\n",n2);
                    
                     if(n3==a)
                    printf("z %d\n",n3);
                    if(n3==b)
                    printf("q %d\n",n3);
                    if(n3==c)
                    printf("s %d\n",n3);
                    if(n3==d)
                    printf("l %d\n",n3);
                    
                     if(n4==a)
                    printf("z %d\n",n4);
                    if(n4==b)
                    printf("q %d\n",n4);
                    if(n4==c)
                    printf("s %d\n",n4);
                    if(n4==d)
                    printf("l %d\n",n4);
                    
                }
            }
        }
    }
    
    return 0;
    
}
                 