int f(int,int,int *p);
void main()
{
int a[5][5],i,j,k,m,n;
for(i=0;i<=4;i++)
  for(j=0;j<=4;j++)
  scanf("%d",&a[i][j]);
scanf("%d%d",&m,&n);
  k=f(m,n,a[0]);
  if(k==0)
	  printf("error\n");
  else
  for(i=0;i<=4;i++)
{for(j=0;j<=3;j++)
  printf("%d ",*(a[0]+i*5+j));
printf("%d\n",*(a[0]+i*5+4));
}
   
}

int f(int m,int n,int *p)
{int k=1,i,temp;
	if(n>=0&&n<=4&&m>=0&&m<=4)
	for(i=0;i<=4;i++)
	{  temp=*(p+n*5+i);
	   *(p+n*5+i)=*(p+m*5+i);
	   *(p+m*5+i)=temp;
	}
	else k=0;
	
return k;	
	}