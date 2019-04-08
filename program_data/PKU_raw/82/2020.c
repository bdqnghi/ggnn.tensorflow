int main(){
    int n,i,t,j;
    scanf("%d",&n);
    int a[100][2],b[100];
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i][0],&a[i][1]);
    }
    j=0;
    b[j]=0;
    for(i=0;i<n;i++){
        if(a[i][0]<=140&&a[i][0]>=90&&a[i][1]<=90&&a[i][1]>=60){
            b[j]=b[j]+1;
        }else{
            j++;
            b[j]=0;
        }
    }

        t=b[0];
    for(i=0;i<j;i++){
    t=(t>b[i+1]?t:b[i+1]);
    }

 printf("%d\n",t);
    return 0;
}
