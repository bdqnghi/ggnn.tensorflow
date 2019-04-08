int fs(int m){
    int i;
    if(m==1||m==2) {
        return 0;
    }
    else{
    for(i=2;i<m;i++){
        if(m%i==0)
        break;
        }
    if(i<m) return 0;
    else return 1;
    }
        }
int fh(int n){
    int a=n/10;
    int b=n%10;
    int m=0;
    int t;
    while(a!=0){
     m=b*10;
     t=a;
     a=a/10;
     b=t%10;
    b+=m;
    }
    if(b==n) return 1;
    else return 0;
    }
int main()
{
    int k1,k2,i;
    int count=0,ncount=0;
    scanf("%d%d",&k1,&k2);
    for(i=k1;i<=k2;i++){
        if(fs(i)==1&&fh(i)==1&&count==0){
        printf("%d",i);
        count++;
        ncount++;
        }
        else if(fs(i)==1&&fh(i)==1&&count!=0){
            printf(",%d",i);
            count++;
            ncount++;
            }
        }
        if(ncount==0)printf("no\n");
        return 0;

    }