int main(){
   int a[100],b[100],c[100],d[100],e[100],f[100];
   int i,s[100],k=0;
   for(i=0;;i++){
		scanf("%d %d %d %d %d %d",&(a[i]),&(b[i]),&(c[i]),&(d[i]),&(e[i]),&(f[i]));
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){break;;}
		
		s[i]=(d[i]-a[i]+12)*3600+(e[i]-b[i])*60+(f[i]-c[i])*1;
		 k+=1;
   }
   for(i=0;i<k;i++){
	   printf("%d\n",s[i]);
   }
   return 0;
}