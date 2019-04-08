


int main()
{
    int z,totalhorse,tianwins[10000]={0},tianloses[10000]={0},p1,p2,p3,p4,qihorse[10000],tianhorse[10000],y,k1,m1,temp1,k2,m2,temp2,count=0,i,j;
    //p1???????????????p2??????????????p3??????????????p4?????????????
    for(z=0;z<=10000;z++)
    {
        scanf("%d",&totalhorse);
        if(totalhorse==0)
        {
            break;
        }
        else
        {
            count++;
        }
        for(i=0;i<=totalhorse-1;i++)
        {
            scanf("%d",&tianhorse[i]); //??????
        }
        for(j=0;j<=totalhorse-1;j++)
        {
            scanf("%d",&qihorse[j]); //??????
        }
        for(k1=0;k1<=totalhorse-1;k1++)
        {
            for(m1=0;m1<=totalhorse-2-k1;m1++)
            {
                if(tianhorse[m1]<tianhorse[m1+1])    //???????????
                {
                    temp1=tianhorse[m1];
                    tianhorse[m1]=tianhorse[m1+1];
                    tianhorse[m1+1]=temp1;
                }
            }
        }
        for(k2=0;k2<=totalhorse-1;k2++)
        {
            for(m2=0;m2<=totalhorse-2-k2;m2++)
            {
                if(qihorse[m2]<qihorse[m2+1])    //???????????
                {
                    temp2=qihorse[m2];
                    qihorse[m2]=qihorse[m2+1];
                    qihorse[m2+1]=temp2;
                }
            }
        }
        p1=0;
        p2=0;
        p3=totalhorse-1;
        p4=totalhorse-1;
        for(y=1;y<=totalhorse;y++)
        {
                if(tianhorse[p2]>qihorse[p1])
                {
                    tianwins[z]++;
                    p2++;
                    p1++;
                }
                else
                {
                        if(tianhorse[p4]>qihorse[p3])
                        {
                            tianwins[z]++;
                            p4--;
                            p3--;

                        }
                        else if(tianhorse[p4]==qihorse[p3]&&tianhorse[p4]<qihorse[p1])
                        {
                                tianloses[z]++;
                                p4--;
                                p1++;
                        }
                        else if(tianhorse[p4]==qihorse[p3]&&tianhorse[p4]==qihorse[p1])
                        {
                            tianloses[z]++;
                            tianwins[z]++;
                            p4--;
                            p1++;
                        }
                        else if(tianhorse[p4]<qihorse[p3])
                        {
                            tianloses[z]++;
                            p1++;
                            p4--;
                        }
                }
        }
    }
    int x;
    for(x=0;x<=count-1;x++)
    {
        printf("%d\n",(tianwins[x]-tianloses[x])*200);
    }

}
