int main()
{
    int fff(int a[],int k);
    int i,n,a[25],sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    sum=fff(a,1);
    for(i=2;i<n+1;i++)
                      if(sum<fff(a,i))sum=fff(a,i);
    printf("%d",sum);
}
int fff(int a[],int k)
{
         int t=0,i;
     if(k==0){t=0;}
     if(k==1){t=1;}
     if(k>1)
     {
      t=1;
     for(i=1;i<k;i++)
     {
            if(a[k-1]<=a[i-1])
            {
                                 if((fff(a,i)+1)>t)t=fff(a,i)+1;}
     }
     }
     return t;
}