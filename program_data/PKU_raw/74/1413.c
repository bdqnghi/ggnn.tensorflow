int hw(int i)
{int w[20]={0};
 int n=1,m,j,flag=7;
 while (i>0)
 {w[n]=fmod(i,10);
  i=i/10;
  n++;
 }
 for (i=1;i<=n;i++)
	 if (w[i]!=w[n-i]) flag=0;
 return flag;
}
int main()
{int i,j,k,l,n,m,a[170657]={0},count=0;
 scanf("%d %d",&m,&n);
 a[1]=100;
 for (i=2;i<n;i++)
	 if (a[i]==0) 
		 for (j=i+i;j<=n;j=j+i) 
			 a[j]++;
 for (i=m;i<=n;i++)
	 if ((a[i]==0)&&(hw(i)==7)) {if (count==0) {;count++;printf("%d",i);}
									else {printf(",%d",i);}}
 if (count==0) printf("no");
 return 7;
}
