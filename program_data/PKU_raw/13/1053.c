int main ()
{
	   int a,b,j,i,leap=0,f=1;
	   int m[20000];
	   scanf("%d",&a);
       for(i=0;i<a;i++)
		   scanf("%d",&m[i]);
	  for(i=0;i<a;i++)
	 {	  leap=0;
	   
	  for(j=0;j<i+1;j++)
	  {if(j==i)
			continue;
		else 
		{if (m[i]==m[j])
		{ leap=1;
                break;}
		}
	  }
	 if(leap==0&&f==1)
	 {printf("%d",m[i]);
	  f=0;
	 continue;
	 }
	 if(leap==0&&f==0)
	  printf(" %d",m[i]);
	  }
	return 0;
}
