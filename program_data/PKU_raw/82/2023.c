int main(){
    int n,i,x=0,c=0;
    int num[100];
    scanf("%d",&n);
    struct xueya{
        int a;
        int b;
    }xy[100];
    for(i=0;i<n;i++){
        scanf("%d %d",&xy[i].a,&xy[i].b);
    }
    for(i=0;i<n-1;i++){
        if(90<=xy[i].a&&xy[i].a<=140&&60<=xy[i].b&&xy[i].b<=90){
            x++;
        }else{
            num[c]=x;
            c++;
            x=0;
        }
    }
     
        if(90<=xy[n-1].a&&xy[n-1].a<=140&&60<=xy[n-1].b&&xy[n-1].b<=90){
            x++;
			num[c]=x;
            c++;
        }else{
            num[c]=x;
            c++;
            x=0;
        }
    
    int d;
    for(i=0;i<c-1;i++){
        for(i=0;i<c-1;i++){
            if (num[i]>num[i+1]){
            d=num[i+1];
            num[i+1]=num[i];
            num[i]=d;
            }
        }
    }
    printf("%d\n",num[c-1]);
return 0;
}

