main()
{
int n, num, k , max=-1, min=100000, sum=0; 
scanf("%d",&n);
for(k=0; k<n; ++k)
{scanf("%d",&num);
sum=sum+num;
if(num>max) max=num;
if(num<min) min=num;
}						
if((max*n-sum)==(sum-min*n)) printf("%d,%d",min,max);
else if ((max*n-sum)>(sum-min*n)) printf("%d", max);
else printf("%d",min);
}
