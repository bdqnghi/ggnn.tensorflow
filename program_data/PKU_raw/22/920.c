int main()
{
    char c[1500];char d[4];
    int num[300];
    int i=0,j=0,s=1,k=0,m=0;
    int a,b;
    scanf("%s",c);
    do
    {
        if(c[i]!=','&&c[i]!='\0')
        {
            d[j]=c[i];
            j++;
        }
        else
        {
            while(j>0)
            {
                j--;
                k+=(d[j]-48)*s;
                s*=10;
            }
            num[m]=k;
            m++;
            j=k=0;s=1;
        }
        i++;
    }
    while(c[i-1]!='\0');           
    a=b=-1;k=m;
    while(m>0)
    {
        m--;
        if(a<num[m]) a=num[m];
    }                               
    while(k>0)
    {
        k--;
        if(num[k]==a) continue;
        b=(b<num[k])? num[k]:b;
    }                              
    if(b==-1)
		printf("No");
    else 
		printf("%d",b);
    
    
}