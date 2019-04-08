PrimeNumber(int n)
{int k,i,flag=0;
 k=sqrt(n);
 for(i=2;i<=k;i++)
	 if(n%i==0)break;
 if(i>k)flag=1;
 return flag;
}
LoopNumber(int n)
{
int a,b=0,c,flag=0;
a=n;
for(;a!=0;)
{
c=a%10;
a=a/10;
b=b*10+c;
}
if(b==n)flag=1;
  return flag;
}
main()
{int m,n,i,k=0,a[100],flag1,flag2;
 scanf("%d%d",&m,&n);
 for(i=m;i<=n;i++)
	{flag1=PrimeNumber(i);
	 flag2=LoopNumber(i);
	 if(flag1==1&&flag2==1){a[k]=i;k++;}
	}
 if(k>0) 
	{printf("%d",a[0]);
	 for(i=1;i<k;i++)
		 printf(",%d",a[i]);
	}
 if(k==0)
	 printf("no");
}