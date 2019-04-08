
int main()
{
	int n,p,i,j,temp[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
        if(p==0) printf("60\n");
	      else
		  {
	         for(j=1;j<=p;j++)
			scanf("%d",&temp[j]);
	         for(j=p;j>0;j--)
			 {
		       if(temp[j]+3*j>63)
			   continue;
		       
		        else if(temp[j]+3*j<=60)
				{
				printf("%d\n",60-3*j);
		       break;
				}
				else
			   { printf("%d\n",temp[j]);
			   break;
				}
			 } 
		
		  }
		}
	return 0;
}

