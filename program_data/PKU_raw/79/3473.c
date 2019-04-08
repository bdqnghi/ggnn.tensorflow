int fun(int m,int n)
{
	int i,j=0,k,e;
	int r[300]={0};
	k=m;
	while(k>0)
	{
		for(i=0;i<m;i++)
	   {	
		  if(r[i]<0)continue;
   	           r[i]=0;
	   }
		for(i=0;i<m;i++)
		{
			if(r[i]<0)continue;
			j++;
			r[i]=r[i]+j;
			if(r[i]%n==0)
			{
				r[i]=-1;
				k--;e=i;
			}
		}

	}
	return e+1;
}
int main()
{
int m,n,k;
while(1){
scanf("%d %d",&m,&n);
if(m==0&&n==0)break;
printf("%d\n",fun(m,n));
}
return 0;
}
