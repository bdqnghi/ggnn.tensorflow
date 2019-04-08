int main()
{
 int n,i,j,a[100][100],m1,n1,m2,n2,t=0,S;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
	 for(j=0;j<n;j++)
	 {
		 scanf("%d",&a[i][j]);
	 }
 }
 for(i=0;i<n;i++)
 {
	 for(j=0;j<n;j++)
	 {
		 if(a[i][j]==a[i][j+1]&&a[i][j]==a[i+1][j]&&a[i][j]==0)
		 {
			 m1=i;
			 n1=j;
			 t=1;
			 break;
		 }
		 if(t) break;
	 }
 }
 t=0;
for(j=0;j<n;j++)
 {
	 for(i=0;i<n;i++)
	 {
		 if(a[i][j]==a[i][j-1]&&a[i][j]==a[i-1][j]&&a[i][j]==0)
		 {
			 m2=i;
			 n2=j;
			 t=1;
			 break;
		 }
		 if(t) break;
	 }
 }
S=(m2-m1-1)*(n2-n1-1);
printf("%d",S);
return 0;
}
