
int main()
{
    int i,j,n,m,a,total=0,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d",&m);
					if(m==0)
					{printf("60\n");
					}
					else
					{
                    for(j=1;j<=m;j++)
                    {scanf("%d",&a);
					if(total<60)
                    {total=a+3*j;
                    b=j;
					}
                    }
                    if(total<=62&&total>=60)
                    {total-=3*b;
                   
                    }
                    else if(total<60)
                    {total=60-3*m;
                    
                    }
                    else
                    {total=60-3*(b-1);
                    
                    }
                    printf("%d\n",total);
					}
    }

	return 0;
}
