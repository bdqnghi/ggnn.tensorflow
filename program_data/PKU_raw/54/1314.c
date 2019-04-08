void main()
{int i,j,n,k,m=1,flag=0,l;
 scanf("%d%d",&n,&k);
 for (l=1;;l++)
 {flag=0;
 for (m=l,i=1;i<=n;i++)
 {if (m%(n-1)!=0)
  flag=1;
 m=m+m/(n-1)+k;}
 if (flag==0)
	 break;}
 printf("%d",m);
}