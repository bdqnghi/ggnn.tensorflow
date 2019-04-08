
int main ()
{
    int n,j,i,k,t=1,l,p=0;
    int a[50000]={0};
    scanf("%d",&n);
    a[0]=1;
    l=1;
    for(i=0;i<n;i++)
    {t=l;
                    for(j=0;j<t;j++)
                    {
                                    a[j]=2*a[j];
                                    if(a[j]+p>=10){a[j]=a[j]+p-10;p=1;}else{a[j]+=p;p=0;}
                                    if((j==t-1)&&p==1) {a[j+1]=1;l++;p=0;}
                    }
    
    
    
                    
    } 
    for(i=l-1;i>=0;i--)
    printf("%d",a[i]);
    getchar();getchar();getchar();
    
    }