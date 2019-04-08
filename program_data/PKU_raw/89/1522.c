int main()
{
    int n;
    scanf("%d",&n); 
    int i,j;
    int f[10000];
    for(i=0;i<n;i++)   f[i]=0;
    while(!(i==0&&j==0))   
    { 
       scanf("%d %d",&i,&j);f[i]--;f[j]++;}
   for(i=0;i<n;i++) 
    if(f[i]==n-1) { printf("%d",i); break;}  
   if(i==n)    printf("NOT FOUND");
return 0;
} 