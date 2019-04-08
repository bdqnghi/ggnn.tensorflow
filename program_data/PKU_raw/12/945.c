int main(){
    int c,a[20],t,sum;
    while(1){
        t=sum=0;
        while(1){
           scanf("%d",&c);
           if(!c || c==-1)break;
           a[t++]=c;               
        }
        if(c==-1)break;
        for(int i=0;i<t;i++)
        for(int j=0;j<t;j++)
            if(a[j]==a[i]*2)sum++;
        printf("%d\n",sum);
    }
    return 0;
}