int a[29],max[29]={0},count[29]={0};
int N;
int select(int x)
{    if(count[x]==0)
    {
                        
     int i;
 for (i=x+1;i<=N;i++)
     {if (a[x]>=a[i])
       {if(max[x]<=select(i)){max[x] = select(i)+1;}
       }
       }   
        if(max[x]==0)
                     {max[x]=1;}   
        count[x]=1;
 }
 /*printf("%d ?  ?  %d?    ",x,max[x]);*/
return max[x];}

main()
{   int maxm;
    scanf("%d",&N);
    for(int j=1;j<=N;j++)
    {scanf("%d",&a[j]);
    } 
    maxm=select(1);
    for(int k=2;k<=N;k++)
    {if(maxm<select(k))
                       {maxm=select(k);}
    }  
     /*for(int j=1;j<=N;j++)
    {printf("%d ?  ?  %d?   \n",j,select(j)); 
    } */
      printf("%d",maxm);
      }

