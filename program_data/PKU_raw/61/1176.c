int main(){
		int n,i,t;
		int a[50]={1,1};
		int b[100],c[100];
        for(i=0;i<48;i++)
			a[i+2]=a[i]+a[i+1];
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
            t=b[i];
		    c[i]=a[t-1];
		}
           for(i=0;i<n;i++)
			   printf("%d\n",c[i]);
}
