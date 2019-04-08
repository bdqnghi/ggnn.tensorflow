int main()
{
    double k[9],f[9],l[9];
    double GPA,s,m;
    int n,i;
    m=0;
    s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%lf",&k[i]);
	   m=m+k[i];
    }
    for(i=0;i<n;i++){
       scanf("%lf",&f[i]);
       if(f[i]>=90&&f[i]<=100)
          l[i]=4.0;
       else if(f[i]<=89&&f[i]>=85)
          l[i]=3.7;
       else if(f[i]<=84&&f[i]>=82)
          l[i]=3.3;
       else if(f[i]<=81&&f[i]>=78)
          l[i]=3.0;
       else if(f[i]<=77&&f[i]>=75)
          l[i]=2.7;
       else if(f[i]<=74&&f[i]>=72)
          l[i]=2.3;
       else if(f[i]<=71&&f[i]>=68)
          l[i]=2.0;
       else if(f[i]<=67&&f[i]>=64)
          l[i]=1.5;
       else if(f[i]<=63&&f[i]>=60)
          l[i]=1.0;
       else
          l[i]=0;
    }
    for(i=0;i<n;i++){
		s=s+k[i]*l[i];
	}
	GPA=s/m;
    printf("%.2lf",GPA);
    return 0;
}


