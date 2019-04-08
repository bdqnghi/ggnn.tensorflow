	int ispr(int t) 
	{
    int v=sqrt(t*1.0)+1;
    for(int i=2; i<v; i++)
        if(t%i==0)
            return 0;
    return 1;
    }


int sum=0;
void fun(int n,int i) {
    if(n==1)
        sum++;
    while(i<=n) {
        if(n%i==0)
            fun(n/i,i);
        i++;
    }
    return ;
}


int main() {
    int n;
    scanf("%d",&n);
    while(n--) {
        int a;
        scanf("%d",&a);
        if(ispr(a)) {
            printf("1\n");
            continue;
        }
        
        int i=2,res=1;
        while(i<=a/2) {
            if(a%i==0) {
                sum=0;
                fun(a/i,i);
                res+=sum;
            }
            i++;
        }
        printf("%d\n",res);
    }
}