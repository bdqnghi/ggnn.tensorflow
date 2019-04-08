
int main()

{

    int n,i,m,a,p,q,b;

    scanf("%d",&n);

    scanf("%d",&p);

    scanf("%d",&q);

    if(p>q){

       a=p;

b=q;

    }

    else if(p<=q){

       a=q;

       b=p;

    }

    i=3;

    while(i<=n){

    scanf("%d",&m);

    if(m>a){

       b=a;

       a=m;

    }

else if(m>b){

       b=m;

    }

    i++;

    }

    printf("%d\n%d\n",a,b);

    return 0;

}
