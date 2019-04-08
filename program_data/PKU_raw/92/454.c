int main(void)
{
    int n,i,j,t,a[1001],b[1001];
    long f[2][1001],max;
    int ss(int x,int y);

    scanf("%d",&n);
    while(n!=0){
      for(i=1;i<=n;i++) scanf("%d",&a[i]);
      for(i=1;i<=n;i++) scanf("%d",&b[i]);
      f[0][0]=0;
      for(i=1;i<n;i++)
	for(j=i+1;j<=n;j++)
	  if(a[i]<a[j]){
	    t=a[i];
	    a[i]=a[j];
	    a[j]=t;
	  }
      for(i=1;i<n;i++)
	for(j=i+1;j<=n;j++)
	  if(b[i]<b[j]){
	    t=b[i];
	    b[i]=b[j];
	    b[j]=t;
	  }
      f[0][0]=0;t=0;
      for(i=1;i<=n;i++){
	t=1-t;
	f[t][0]=f[1-t][0]+ss(a[n-i+1],b[i]);
	f[t][i]=f[1-t][i-1]+ss(a[i],b[i]);
	for(j=1;j<i;j++)
	  if(f[1-t][j-1]+ss(a[j],b[i])>f[1-t][j]+ss(a[n-(i-j)+1],b[i]))
	    f[t][j]=f[1-t][j-1]+ss(a[j],b[i]);
	  else f[t][j]=f[1-t][j]+ss(a[n-(i-j)+1],b[i]);
      }
      max=f[t][0];
      for(i=1;i<=n;i++)
	 if (f[t][i]>max) max=f[t][i];
      printf("%ld\n",max);
      scanf("%d",&n);
    }
}
int ss(int x,int y)
{
    if (x>y) return(200);
    else if(x==y) return(0);
    else return(-200);
}