int main()
{
    int n;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int m;
        scanf("%d",&m);
        int q=60;
        if(m==0) printf("%d\n",q);
        int j;
        int a[30];
        for(j=0;j<m;j++){
            scanf("%d",&a[j]);
        }
        for(j=m-1;j>-1;j--){
            if((j+1)*3+a[j]<=60){
                int o;
                o=60-3*(j+1);
                if((j+1)*3+a[j+1]>57&&(j+1)*3+a[j+1]<60) o=o-(60-(j+1)*3-a[j+1]);
                printf("%d\n",o);
                break;
            }
        }
    }
    return 0;
}
