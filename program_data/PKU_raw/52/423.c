int main()
{
     int m,n,i;
     scanf("%d%d",&n,&m);
	 int *pi;
     pi=(int*)malloc(sizeof(int)*(2*n-m));
	 for (i=0;i<n;i++)
	 {
		 scanf("%d",pi+i);
	 }
     for (i=0;i<n-m;i++)
	 {
		 *(pi+i+n)=pi[i];
	 }
	 printf("%d",pi[n-m]);
	 for(i=n-m+1;i<2*n-m;i++)
	 {
		 printf(" %d",pi[i]);
	 }
	 free (pi);
	return 0;
}
