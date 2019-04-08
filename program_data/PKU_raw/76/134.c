int main()
{
    int n,a[50000][2],b[50000][2],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d %d",&a[i][0],&a[i][1]);
                    }
    int min,max;              
    int p,q;
    for (q=1;q<=n;q++)
    {
        for(i=0;i<(n-q);i++)
        {
        if (a[i][1]>a[i+1][1])
        {
            p=a[i+1][1];
            a[i+1][1]=a[i][1];
            a[i][1]=p;            
                        }
            }
        }
        max=a[n-1][1]; 
    int e,f,s;
    for (f=1;f<=n;f++)
    {
        for (i=0;i<(n-f);i++)
        {
        if (a[i][0]>a[i+1][0])
        {
            e=a[i+1][0];
            a[i+1][0]=a[i][0];
            a[i][0]=e;            
                        }
            }
        }
        min=a[0][0];
    for (s=1;s<=n;s++)
    {
        for (i=0;i<n-s;i++)
        {
        if (a[i][0]>a[i+1][0])
        {
            e=a[i+1][0];
            f=a[i+1][1];
            a[i+1][0]=a[i][0];
            a[i+1][1]=a[i][1];
            
            a[i][0]=e;
            a[i][1]=f;            
                        }
            }
        }
    int t;
    for(i=0;i<n;i++){
			 		 if((a[0][1])>=(a[i+1][0])&&(a[i+1][1])>(a[0][1]))
			 		 {
	   				 a[0][1]=a[i+1][1];
	   				 continue;
					 }
					 if ((a[0][0]==min)&&(a[0][1]==max))
					 {
					  				    printf("%d %d",min,max);			  				 
									    break;}
                    }
     if (a[i][1]==max)
     i=1;
     else
     printf("no");
    return 0;
    } 