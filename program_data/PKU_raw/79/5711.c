int main()
{
	int n[100],m[100];
	int a[300];
	int count=0;
	while(1)
	{
	    scanf("%d %d",n+count,m+count);
	    if(n[count]==0&&m[count]==0)
	    {
             break;
        }
        count++;
    }
    //count =count -1;
    int i=0;
    int j=0;
    int k=0;
    int l=0;
    int p=0;
    int kill=0;
    int kill2=0;
    int start=0;
    int now=0;
    int minmj=0;
    for(i=0;i<count;i++)
    {
        for(k=0;k<n[i];k++)
        {
            a[k]=1;
        }
        start=0;
        for(j=n[i];j>1;j--)
        {
            kill=(m[i])%j;
            if(kill==0)
            {
                minmj=m[i];
                if(j<minmj)
                {
                minmj=j;
                }
                kill=minmj;;
            }
            kill2=0;
            for(l=start;l<(start+n[i]);l++)
            {
                now=l%n[i];
                
                  
                kill2=kill2+a[now];
                if(kill2==kill)
                {
                    a[now]=0;
                    for(p=now+1;p<(now+n[i]);p++)
                    {
                        if(a[p%n[i]]==1)
                        {
                            //printf("%d ",(p%n[i]+1));
                            start=p%n[i];
                            break;
                        }
                    }
                    //start=now+1;
                    //printf("%d",(now+1));
                    break;
                    //printf("%d\n",(l+1));
                }           
            } 
        }
        //printf("\n");
        for(k=0;k<n[i];k++)
        {
            if(a[k]==1)
            {
                printf("%d\n",(k+1));
            }
        }
        
    }

	return 0;
}