int main()
{
  
   int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],g[1000],i;
   for(i=0;i<=11;i=i+1){
   scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
   }
   for(i=0;i<=10;i=i+1){
	   g[i]=(d[i]+12-a[i])*3600+(e[i]-b[i])*60+(f[i]-c[i]);
	   if(a[i]!=0){
	   printf("%d\n",g[i]);
	   }
   }

   
	  
return 0;
}