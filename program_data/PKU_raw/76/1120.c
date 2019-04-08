int main(){
	int n,i,j,a,b,flag=0,z[10000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(a-b==0)z[a-1]=1;
        for(j=a;j<b;j++)z[j]=1;
    }
    for(i=0;i<10000;i++)
    {
        if(flag==0)
        if(z[i]==1){
            a=i;
            flag=1;
            continue;
        }
        if(flag==1)
        if(z[i]==1)continue;
        else
        {
            b=i;
            flag=2;
            continue;
        }
        if(flag==2)
        if(z[i]==1)
        {
            flag=3;
            break;
        }
    }
    if(flag!=2) printf("no");
    else printf("%d %d",a,b);
    return 0;
}