int main()
{
	int s[50],i,n,j,p=0,q=0,c;
	for(i=0;i<=50;i++)
	{
		s[i]=-1;
	}
	s[0]=1;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
	   for(i=0;s[i]!=-1;i++)
	   {c=s[i]*2;
	   s[i]=c%10+p;
	   if(c>=10)
	   {
   		p=1;
   	   }
   	   else p=0;
   		
	   }
	   if(p!=0)
	   s[i]=1;
	   p=0;
   		
   		
   	}
   	for(i=0;s[i]!=-1;i++)
   	{
	   	q++;
	   }
	   for(i=q-1;i>=0;i--)
	   {printf("%d",s[i]);}
return 0;
}