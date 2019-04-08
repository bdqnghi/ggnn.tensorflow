int main()
{

    int i,j,k,m,n;
	char st[500];
	scanf("%s",st);
	for(i=2;i<=500;i++)
	{
	    for(j=0;j<500-i+1;j++)
		{
			if(st[j]=='\0')
				break;
			m=j+i-1;
			for(k=j;k<m;k++)
			{
				if(st[k]!=st[m])
                  break;
				else
			   m=m-1;
			}
         if(k>=m)
		  {
			  for(n=j;n<j+i;n++)
			  {
				  printf("%c",st[n]);
				if(n==j+i-1)
					printf("\n");
			  }
		  }
		}
		
	}
}
	




