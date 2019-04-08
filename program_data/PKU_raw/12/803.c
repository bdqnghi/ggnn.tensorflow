int main()
{
     int a[17],i,n,j;
     scanf("%d",&a[1]);
     while(a[1]>0)
     {
         
         n=0;
         i=1;
        do
          { i++;
            scanf("%d",&a[i]);
            for(j=1;j<=i;j++)
            if(a[i]==a[j]*2||a[j]==a[i]*2) 
             n++;
             
            }
        while(a[i]!=0);
     printf("%d\n",n-1);
     scanf("%d",&a[1]);
     }
}
