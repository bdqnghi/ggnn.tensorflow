
int main()
{
	int i,j,k,l,n=0,m=1,z=0,t=1,g;
	char q[256],p[256],w[256];
	scanf("%s",q);
	scanf("%s",p);
	scanf("%s",w);
	k=strlen(q);l=strlen(p);
	for(i=0;i<k;i++)
	{
		if(p[0]==q[i])
		{
	       for(j=1;j<l;j++)
		   {
			   g=1;
			 if(p[j]!=q[j+i])
				g=0;
		   }
				if(g==1)
				{
					z=1;
					m=i;
					break;
				}
			 	
			
		
		}
	}		
	if(z)
	{
		for(j=0;j<m;j++)
		{
			printf("%c",q[j]);
		}
		printf("%s",w);
		for(j=m+l;j<k;j++)
			printf("%c",q[j]);
	}
	else
		printf("%s",q);
	return 0;
}