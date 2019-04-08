
int main()
{
	int n,a[10],b[10],i,s=0;
	float GPA=0.0,m[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
        s+=a[i];
	}
    for(i=0;i<n;i++){
	scanf("%d",&b[i]);
	}
    for(i=0;i<n;i++){
		if(b[i]>=90 && b[i]<=100)
          m[i]=4.0*(a[i]) ;
		if(b[i]>=85 && b[i]<=89)
          m[i]=3.7*(a[i]) ;
        if(b[i]>=82 && b[i]<=84)
          m[i]=3.3*(a[i]) ;
        if(b[i]>=78 && b[i]<=81)
          m[i]=3.0*(a[i]) ;
        if(b[i]>=75 && b[i]<=77)
          m[i]=2.7*(a[i]) ;
          if(b[i]>=72 && b[i]<=74)
          m[i]=2.3*(a[i]) ;
if(b[i]>=68 && b[i]<=71)
          m[i]=2.0*(a[i]) ;
if(b[i]>=64 && b[i]<=67)
          m[i]=1.5*(a[i]) ;
if(b[i]>=60 && b[i]<=63)
          m[i]=1.0*(a[i]) ;
if(b[i]<60)
          m[i]=0 ;
GPA+=m[i];
	}
    
	printf("%.2f",GPA/s);
	return 0;
}