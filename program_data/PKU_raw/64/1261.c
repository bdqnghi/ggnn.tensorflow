
int main()
{
        int spot[100][3],n,i,j,k=0;
        struct D
        {
                int s[2][3];
                double d;
        } D[1000],tem;
        scanf("%d",&n);
        for (i=0;i<n;i++)
                scanf("%d%d%d",&spot[i][0],&spot[i][1],&spot[i][2]);
        for (i=0;i<n-1;i++)
        {
                for (j=i+1;j<n;j++)
                {
                        D[k].s[0][0]=spot[i][0];
                        D[k].s[0][1]=spot[i][1];
                        D[k].s[0][2]=spot[i][2];
                        D[k].s[1][0]=spot[j][0];
                        D[k].s[1][1]=spot[j][1];
                        D[k].s[1][2]=spot[j][2];
                        D[k].d=(double)sqrt((spot[i][0]-spot[j][0])*(spot[i][0]-spot[j][0])+(spot[i][1]-spot[j][1])*(spot[i][1]-spot[j][1])+(spot[i][2]-spot[j][2])*(spot[i][2]-spot[j][2]));
                        k++;
                }
        }
        for(i=0;i<k;i++)
                for(j=k-1;j>i;j--)
                {
                        if (D[j].d>D[j-1].d)
                        {
                                tem=D[j];
                                D[j]=D[j-1];
                                D[j-1]=tem;
                        }
                }
        for (i=0;i<k;i++)
                printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",D[i].s[0][0],D[i].s[0][1],D[i].s[0][2],D[i].s[1][0],D[i].s[1][1],D[i].s[1][2],D[i].d);
}