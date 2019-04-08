 int main()
 {
	 int n,i;
	 int a[100],b[4]={0,0,0,0};
	 double c[4];
	 scanf("%d",&n);
	 for (i=0;i<n;i++)
	 {
		 scanf("%d",&a[i]);
	 if (a[i]>=1 && a[i]<=18)
		 b[0]++;
	 else if (a[i]>=19 && a[i]<=35)
		 b[1]++;
	 else if (a[i]>=36 && a[i]<=60)
		 b[2]++;
	 else
		 b[3]++;
	 }
	 for (i=0;i<4;i++)
	 {
		 //printf("%d\t",b[i]);
		 c[i]=(double)b[i]/n*100;
	 }
	 printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",c[0],c[1],c[2],c[3]);
	 return 0;
 }




