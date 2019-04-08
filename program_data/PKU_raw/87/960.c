int main()
{
   int a[100],b[100],c[100],d[100],e[100],f[100],s[100],r[100],p[100];
   int i,j;
   for(i=0;i<100;i++){
	   scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	   s[i]=a[i]*3600+b[i]*60+c[i];
	   r[i]=d[i]*3600+12*3600+e[i]*60+f[i];
	   p[i]=r[i]-s[i];
	   if(p[i]==3600*12){j=i;break;}
   }
   for(i=0;i<j;i++){
   printf("%d\n",p[i]);
   }
	   return 0;
}
