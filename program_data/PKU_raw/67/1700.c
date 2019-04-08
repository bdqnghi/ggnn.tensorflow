int main()
{
    int n,i;
    double jw,othr,othf,oths;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf%lf",&othr,&othf);
        if(i==0)jw=othf/othr;
        else {
               oths=othf/othr;
               if((oths-jw)<=0.05&&(jw-oths)<=0.05)
                  printf("same\n");
               else if(oths<jw)
                  printf("worse\n");
               else printf("better\n");
               }
               }
    return 0;
}