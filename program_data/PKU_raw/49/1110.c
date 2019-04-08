int main()
{
	char a[500],b[500],c[500];
	int i,j=0,l,s=0,n,p,q,k=0;
	scanf("%s",a);
	l=2;
	n=strlen(a);
	while(l<=n)
	{
		for(i=0;i<n+1-l;i++)
		{
			p=i;
			q=i;
			for(s=0;s<=l-1;s++)
			{
				b[j]=a[p+l-1];
				p=p-1;
				c[j]=a[q];
				q=q+1;
				j++;
			}
			for(j=0;j<l;j++)
                 {
                     if(b[j]==c[j])
                         k=k+1;
                     else;
                   }
               if(k==l)
			   {
				   for(j=0;j<l;j++)
				     {
						 printf("%c",c[j]);
				   }
				   printf("\n");
			   }
			else;
			j=0;
			k=0;
			s=0;
		}
		l++;
		i=0;
	}
	return 0;
}