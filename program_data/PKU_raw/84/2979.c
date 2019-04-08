int main()
{
    int len,i,max,cmax;
    int n[100];
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {scanf("%d",&n[i]);}
    max=n[0];
    for(i=0;i<len-1;i++)
    {if(n[i]<n[i+1])max=n[i+1];
    }
    printf("%d\n",max);
    if(max==n[0])cmax=n[1];
     else cmax=n[0];
    for(i=0;i<len-1;i++)
    {if(n[i]<n[i+1])
       {if(n[i+1]==max)
          {if(n[i+2]!=max&&n[i]<n[i+2])cmax=n[i+2];}
        else cmax=n[i+1];                  
       }
    }
    printf("%d",cmax);
    return 0;
}
     