int main(int argc, char* argv[])

{ 
   int n,i,j,sum=0;
   int year,m1,m2;
   int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%d %d %d",&year,&m1,&m2);
   if(((year%4==0)&&(year%100!=0))||year%400==0)a[1]=29;
   if(m1>m2){int m;
             m=m1;
             m1=m2;
             m2=m;
    }
    for(j=m1;j<m2;j++){
       sum=sum+a[j-1];
    }
    if(sum%7==0)printf("YES\n");
    else printf("NO\n");
    sum=0;
    a[1]=28;
  }
   return 0;
}