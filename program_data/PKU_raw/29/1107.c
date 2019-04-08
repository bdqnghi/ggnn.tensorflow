int main()
{
    int m,i=0,a[max],p;
    float fz[max]={2,2},fm[max]={1,1},sum=2;
    scanf("%d",&m);
    for(i=0;i<m;i++){
       scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++){
		for(p=0;p<2;p++){
		   fz[p]=2;
		   fm[p]=1;
		}
		sum=2;
       for(p=2;p<=a[i];p++){
       fz[p]=fz[p-1]+fm[p-1];
       fm[p]=fz[p-1];
       sum+=fz[p]/fm[p];
   } printf("%.3f\n",sum);
} 
   
return 0;
}