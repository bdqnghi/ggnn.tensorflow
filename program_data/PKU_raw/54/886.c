void main()
{
	int total(int n,int k,int i);
	int i,t=0,n,k,y;
	scanf("%d%d",&n,&k);
	for(i=1;;i++)
	{
          if(total(n,k,i)==0) continue;
		  else {
			  y=total(n,k,i);
			  t++;
			  if(t==1) break;
		  }

	}
	printf("%d\n",y);
}

int total(int n,int k,int i)
{int j,m=i;
for(j=1;j<=n;j++)
{if((n*m)%(n-1)!=0)  {m=0; break;}
else
	m=n*m/(n-1)+k;
}
return(m);
}