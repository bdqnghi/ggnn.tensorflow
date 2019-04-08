main()
{
long int i,j,s,t,p;
long int n;
scanf("%d",&n);
for(i=6;i<=n;i=i+2)
    for(s=3;s<i;s=s+2)
	{   for(t=2;t<sqrt(s)+1;t++)
		    {if(s%t==0)
	            break;
             if(t>=sqrt(s))
				{j=i-s;
                 for(p=2;p<sqrt(j)+1;p++)
				    {if(j%p==0)
					     break;
				     if(p>=sqrt(j))
					 {printf("%ld=%ld+%ld\n",i,s,j);	                      					
					 s=i-1;}   
				    }
				}
		    }
	}

}