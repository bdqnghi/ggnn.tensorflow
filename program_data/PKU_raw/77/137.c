int k,p,t=0,n,a[500],b[500],temp;

char str[1000],c1,c2;

void f(int j){
     int i;
     for(i=0;i<n-1;i++){
        if((str[i]==c1)&&(str[i+j]==c2)){
            a[t]=i;
            b[t]=i+j;
            //printf("%d %d\n",i,i+j);
            t++;
            str[i]=' ';
            str[i+j]=' ';
        }
     }

}
int main(){
    scanf("%s",str);
    n=strlen(str);
    c1=str[0];
    c2=str[n-1];
    
    for(k=1;k<n;k++){
        f(k);
    }
    for(k=0;k<n/2;k++){
        for(p=n/2-1;p>k;p--){
            if(b[p-1]>b[p]){
                temp=b[p-1];
                b[p-1]=b[p];
                b[p]=temp;
                temp=a[p-1];
                a[p-1]=a[p];
                a[p]=temp;
            }
        }
    }
    for(k=0;k<n/2;k++){
        printf("%d %d\n",a[k],b[k]);
    }
    
scanf("%d",&k);
return 0;
}    
