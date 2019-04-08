int main(){
    int n,x=0,y=0,z=0,w=0;
    double b,c,d,e;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d",&(a[i]));
    if(a[i]<=18){
        x++;
    }else if(a[i]>18&&a[i]<=35){
            y++;
        }else if(a[i]>35&&a[i]<=60){
        z++;
        }else{
            w++;
        }
    }
    b=100.0*x/n;
    c=100.0*y/n;
    d=100.0*z/n;
    e=100.0*w/n;
    printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\nOver60: %.2lf%%",b,c,d,e);
    return 0;
}



