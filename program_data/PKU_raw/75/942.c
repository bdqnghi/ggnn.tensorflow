
int main()
{
    int x[10000],i=0,y[10000],m,n,w[10000],t,j;
    char c,z[13];
    x[0]=-1;y[0]=-1;
    do{
        i++;
        scanf("%d",&x[i]);if(x[i]<x[i-1]){t=x[i];x[i]=x[i-1];x[i-1]=t;}
        c=getchar();
        }while(c==',');
    m=i;
    for(i=m-1;i>=1;i--)
    {if(x[i]>x[i+1]){t=x[i];x[i]=x[i+1];x[i+1]=t;}}
 //   for(i=1;i<=4;i++)printf("%d",x[i]);
    
    i=0;  
    do{
        i++;
        scanf("%d",&y[i]);if(y[i]<y[i-1]){t=y[i];y[i]=y[i-1];y[i-1]=t;}
        c=getchar();
        }while(c==',');//for(i=1;i<=4;i++)printf("%d",y[i]);
    n=i;w[x[1]]=0;
    for(i=x[1];i<=y[n];i++)
    {w[i+1]=w[i];
                           for(j=1;j<=n;j++){if(i==x[j])w[i+1]++;if(i==y[j])w[i+1]--;}
                          // printf("%d\n",w[i+1]);
                           }
    for(i=x[1];i<=y[n];i++)
    {
                           if(w[i+1]<w[i]){t=w[i+1];w[i+1]=w[i];w[i]=t;}
                           }
    printf("%d %d",n,w[y[n]+1]);
    
    
    
    
  //  scanf("%s",z);

    //scanf("%s %d",a,&k);
    }
