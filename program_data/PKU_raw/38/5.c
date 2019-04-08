
int main(int argc, char *argv[])
{
    int k,n,i,m;
    double S,a;
    scanf("%d",&k);
    for(m=0;m<k;m++){
                     scanf("%d",&n);
                     double*x;
                     a=0;S=0;
                     x=(double*)malloc(sizeof(double)*n);
                     for(i=0;i<n;i++) {
                                      scanf("%lf",&x[i]);
                                      a+=x[i];
                                      }
                     a=a/n;
                     for(i=0;i<n;i++){
                                      S+=(x[i]-a)*(x[i]-a);
                                      }
                     S=sqrt(S/n);
                     printf("%.5lf\n",S);
                     }
                              
  return 0;
}
