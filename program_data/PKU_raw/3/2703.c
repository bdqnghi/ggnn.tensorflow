int main()
{int n,k,i,j,exict=0;
 scanf("%d%d",&n,&k);
 int a[n];
 for (i=1;i<=n;i++)
	scanf("%d",&a[i-1]);
 for (i=1;i<=n;i++)
 { 
	 for (j=1;j<=i-1;j++)
	 { 
		 if (a[i-1]+a[j-1]==k)
		 {printf("%s","yes");
		  exict=1;
          break;
		 }
	 }
	 if (exict==1)
		 break;
 }
 if (exict==0)
	 printf("%s","no");
}