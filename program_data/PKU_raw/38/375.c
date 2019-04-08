int main()
{
    int k,n,i,j;
    double x[1000],a,b,c,d,s;
    scanf("%d",&k);
    for(j=0;j<k;j++)
      { scanf("%d",&n);
        a=0;
       for(i=0;i<n;i++)
        { scanf("%lf",&x[i]); 
           a+=x[i];}
        b=a/n;
        c=0;
       for(i=0;i<n;i++)
         {  
           c+=pow(x[i]-b,2);}
        d=c/n;
        s=sqrt(d);
       printf("%.5f\n",s);

       }
               return 0;
}
