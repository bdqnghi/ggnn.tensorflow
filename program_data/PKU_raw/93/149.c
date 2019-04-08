main()
{
	int n,a[8]={0},i,j,k;
 scanf("%d",&n);
 j=0;
 if (n%3==0) {a[3]=1;j++;}
 if (n%5==0) {a[5]=1;j++;}
 if (n%7==0) {a[7]=1;j++;}
 k=j;
 for (i=1;i<=7;i++)
 {   
	 if (j==1) break;
	 if (a[i]==1) {printf("%d ",i);j--;}
 }
 if (k!=0) 
 {
  for (j=i;j<=7;j++)
	if (a[j]==1) printf("%d\n",j);
 }
 else printf("n\n");
 return 0;
}