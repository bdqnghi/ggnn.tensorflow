
static struct str 
{
  int num;
  struct str *next;
}s1[301],s2[301],*p1,*p2;//?0?8?0?5?0?8?0?2?0?7?0?3?0?3?0?7?0?2?0?9301  ?0?5?0?6?0?6?0?2  ?0?3·?0?4?0?2?0?9?0?7±í

int chq(int n,int k)
	{
	  int i,j;
	  if (n==1)
	  {
	     return 1;
	  }
	  if (k==1)
	  {
	     return n;
	  }
	  for (i=1;i<=n-1;i++)
	  {
	     for(j=1;j<=k;j++)
			 {
			   p2=p1;p1=p1->next;
			 }		
		 p2->next=p1->next;
		 p1=p2;
	  }
	  return (p1->num);

	}
int main()
	{
	int i,j,n,m,e;
	  for (i=0;i<=300;i++)
	  {
	    s1[i].num=i;
		s1[i].next=&s2[i+1];
	  }
	  while (1)
	  {
	    scanf("%d%d",&n,&m);
	  if (n==0&&m==0)
	  {
	     break;
	  }
	  for (j=0;j<=n;j++)
		  {
		     s2[j]=s1[j];
		  }
		  s2[n].next=&s2[1];
		  p1=&s2[0];
		  e=chq(n,m);
		  printf("%d\n",e);
		   
		
	  }
	  
	  
	   return 0;
	}