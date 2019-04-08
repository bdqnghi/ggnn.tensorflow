int main()
{
     int c=0,n,i,sq,k,j=0,s[100000]={0};
     scanf("%d",&n);
     for(i=3;i<n+1;i=i+2)
     {
       j=0;
       sq=sqrt(i);
       for(k=2;k<=sq;k++)
       {
       if(i%k==0)
       j++;
       }
       if(j==0) s[i]=i;
     }
       for(i=3;i<=n;i=i+2)
       {
       if(s[i]!=0&&s[i+2]!=0)
       {
       printf("%d %d\n",s[i],s[i+2]);
       c++;
       }
       }
       if(c==0)
       printf("empty");
}
