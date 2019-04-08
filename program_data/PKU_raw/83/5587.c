int main()
{
    int n,i,s1=0;
    float s2=0.00,GPA;
    scanf("%d",&n);
    int xf[10],fs[10];
   float jd[10],xfjd[10];
    for(i=0;i<n;i++){
        scanf("%d",&xf[i]);}
        for(i=0;i<n;i++){
        scanf("%d",&fs[i]);
    }
    for(i=0;i<n;i++){
        if(fs[i]>=90&&fs[i]<=100)
        xfjd[i]=4.0*xf[i];
        else if(fs[i]>=85&&fs[i]<=89)
        xfjd[i]=3.7*xf[i];
         else if(fs[i]>=82&&fs[i]<=84)
        xfjd[i]=3.3*xf[i];
         else if(fs[i]>=78&&fs[i]<=81)
        xfjd[i]=3.0*xf[i];
         else if(fs[i]>=75&&fs[i]<=77)
        xfjd[i]=2.7*xf[i];
         else if(fs[i]>=72&&fs[i]<=74)
        xfjd[i]=2.3*xf[i];
         else if(fs[i]>=68&&fs[i]<=71)
        xfjd[i]=2.0*xf[i];
         else if(fs[i]>=64&&fs[i]<=67)
        xfjd[i]=1.5*xf[i];
         else if(fs[i]>=60&&fs[i]<=63)
        xfjd[i]=1.0*xf[i];
         else if(fs[i]<60)
        xfjd[i]=0*xf[i];
    }
    for(i=0;i<n;i++){
        s1=s1+xf[i];
        s2=s2+xfjd[i];
    }
    GPA=s2/s1;
    printf("%.2f",GPA);
    return 0;
}
