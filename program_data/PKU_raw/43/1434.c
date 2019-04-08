void main()
{
    int m,k,i,j,t,s;
    scanf("%d",&m);
    for(i=3;i<=m/2;i=i+2)
    {
                    t=(int)sqrt(i);
                    s=0;
                    for(k=3;k<=t;k=k+2)
                    {s=0;
                    if(i%k==0) {s=1;break;}}
                    if(s==0)
                    {
                            j=m-i;
                            t=(int)sqrt(j);
                            for(k=3;k<=t;k=k+2)
                            {s=0;if(j%k==0) {s=1;break;}}
                            if(s==0)
                            printf("%d %d\n",i,j);
                    }   
    }
}
