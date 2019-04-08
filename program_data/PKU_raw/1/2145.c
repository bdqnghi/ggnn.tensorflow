int zhi(int a);
int yin(int m,int t);
int main()
{
	int n,i=0;
	int str[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&str[i]);
	i=0;
	for(i=0;i<n;i++)
	printf("%d\n",yin(str[i],2));
return 0;
}

int zhi(int a)
{
	int k=2,flag=0;
	for(k=2;k<=a/2;k++)
	{
		if(a%k==0)
		{	flag=1;
			break;
		}
	}
	return flag;

}

int yin(int m,int t)
{
	int j=t,c=0,b=0,x=0;
	int str1[10000][2];
	if(m<t&&m!=1)
		return 0;
	  else if(m==1)
		  return 1;
	  else if(zhi(m)==0)
		  return 1;
	   else
		   for(j=t;j<=m;j++)
		 {
			 if(m%j==0)
			 { str1[c][0]=m/j;
			     str1[c][1]=j;
				 c++;
			

			 }
		 }
		 for(b=0;b<c;b++)
		 {
              x+=yin(str1[b][0],str1[b][1]);
		 }
		 return x;
}
