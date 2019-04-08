int main()
{
    int i=0,n,b,c=0,j=0,k,a[1000][18];
    scanf("%d",&b);
    while(b!=-1){
       if(b!=0){  
         a[i][j]=b;
         j++;
         a[i][17]=j;}
       else{
         a[i][j]=b;
         i++;
         n=i;
         j=0;}
       scanf("%d",&b);
    }  
    for(i=0;i<n;i++){
        for(j=0;j<a[i][17]-1;j++){
            for(k=j+1;k<a[i][17];k++){
                if(a[i][j]==2*a[i][k]||a[i][k]==2*a[i][j]){
                   c++;
                }
            }                 
        }
        printf("%d\n",c);
        c=0;
    }
    return 0;
}