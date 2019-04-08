int f(int a[300],int n,int m)
{int l,i,k,sum,j=1;
for(i=0;i<n;i++)
  a[i]=1;
  for(k=1;k<n;k++)
  {for(sum=0;sum<m;j++)
  {i=(j-1)%n;
    sum=sum+a[i];
	 }
    a[i]=0;
  }
  for(l=0;l<n;l++)
	  if(a[l])
		return(l+1) ;
  
}
  void main()
  {
	  int p,k=0,n,m,a[300],b[100];
    scanf("%d %d",&n,&m);
	while(n!=0)
	{b[k]=f(a,n,m);
	scanf("%d %d",&n,&m);
	k++;
	}
 for(p=0;p<k;p++)
	printf("%d\n",b[p]);
  
  }