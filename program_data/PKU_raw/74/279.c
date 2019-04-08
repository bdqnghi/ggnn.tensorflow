void main()
{int m,n,i,j,k,p,sum=0;
int a[100],b[100];
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)
{
	for(j=2;j<=i/2+1;j++)
		if(i%j==0)
			break;
		if(j>i/2)
		{for(j=1;j<100;j++)
		if(i/(pow(10,j))<1)
			break;
		p=i;
         for(k=j-1;k>=0;k--)
		 {a[k]=(p/pow(10,k));

		 p=(p-a[k]*pow(10,k));
		 
		 b[j-k-1]=a[k];}
for(k=0;k<j;k++)
if(b[k]!=a[k])
break;

if(k==j)
{if(sum!=0)
printf(",");
	printf("%d",i);
sum++;}
		}

}
if(sum==0)
printf("no");

}