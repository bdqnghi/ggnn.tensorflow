int main()  {
	int m,n,i,j,g=0,t,h,k,l;
    int a[22][22]={0},b[100],c[100];
   scanf("%d %d",&n,&m);

for(i=1;i<=n;i++) {
		 for(j=1;j<=m;j++) {
			 scanf("%d",&a[i][j]);
		 }
	}
   for(i=1;i<=n;i++) {
		for (j=1;j<=m;j++) {
           if( (a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i][j+1])&&(a[i][j]>=a[i-1][j])&&(a[i][j]>=a[i+1][j])  )
		   {b[g]=i-1; 
		    c[g]=j-1; 
			g++;
		   }
		}
	}
for(l=0;l<g;l++) {
        for(k=0;k<g-1;k++){
			if (b[k]>b[k+1])
			{t=b[k];   b[k]=b[k+1];    b[k+1]=t;
			h=c[k];   c[k]=c[k+1];    c[k+1]=h;}
			if(b[k]==b[k+1]&&c[k]>c[k+1])  {h=c[k]; c[k]=c[k+1]; c[k+1]=h;}
		}
	}

for(l=0;l<g;l++){
	printf("%d %d\n",b[l],c[l]);
}

	return 0;
}
    