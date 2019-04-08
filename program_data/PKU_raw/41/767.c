
int main(void)
{
    int a[5],i,j,k,c=0,s,t,c1=0;
    int ag[5];
    for(a[0]=1;a[0]<=5;a[0]++)
        for(a[1]=1;a[1]<=5;a[1]++)
            for(a[2]=1;a[2]<=5;a[2]++)
                for(a[3]=1;a[3]<=5;a[3]++)
                    for(a[4]=1;a[4]<=5;a[4]++)
                    {
                        ag[0]= (a[4]==1);
                        ag[1]= (a[1]==2);
                        ag[2]= (a[0]==5);
                        ag[3]= (a[2]!=1);
                        ag[4]= (a[3]==1);
                        for(i=0;i<5;i++)
                            for(j=0;j<5;j++)
                                if(a[i]==1&&a[j]==2&&ag[i]==1&&ag[j]==1)
                                {
                                    c=0;
                                    //printf("%d %d\n",a[i],a[j]);
                                    for(k=0;k<5;k++)
                                    {
                                        if(k!=i&&k!=j)
                                            if(ag[k]==0)
                                                c++;
                                        //printf("%d\n",c);
                                    }
                                    if(c==3)
                                    {
                                        c1=0;
                                        for(s=0;s<5;s++)
                                        {
                                            for(t=s+1;t<5;t++)
                                                if(a[s]!=a[t])
                                                    c1++;
                                        }
                                        //printf("%d\n",c1);
                                        if(c1==10)
                                            if(a[4]!=2&&a[4]!=3)
                                        {
                                            for(s=0;s<5;s++)
                                            {
                                                printf("%d",a[s]);
                                                if(s!=4)
                                                    printf(" ");
                                            }
                                        }
                                        //printf("\n");
                                    }
                                        
                                }
                            
                        
                    }
    return 0;
}