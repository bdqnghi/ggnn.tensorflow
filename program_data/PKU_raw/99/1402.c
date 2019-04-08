int main(){
    int i,n,a[101];
    double b,c,d,e,sum1=0,sum2=0,sum3=0,sum4=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){scanf("%d",&a[i]);
                      if(a[i]<=18)sum1+=1;
                      else if(a[i]>=19&&a[i]<=35)sum2+=1;
                      else if(a[i]>=36&&a[i]<=60)sum3+=1;
                      else sum4+=1;}
    b=(100*sum1)/n;c=(100*sum2)/n;d=(100*sum3)/n;e=(100*sum4)/n;
    printf("1-18: %.2lf%%\n",b);
    printf("19-35: %.2lf%%\n",c);
    printf("36-60: %.2lf%%\n",d);
    printf("60??: %.2lf%%\n",e);
    return 0;
}