main ()
{
int z,q,s,l,i,j,n;
int t[4]={1,2,3,4},u[4];
char x[4][10];
for (z=10;z<=50;z=z+10)
{
    for (q=10;q<=50;q=q+10)
    {
        for (s=10;s<=50;s=s+10)
        {
            for (l=10;l<=50;l=l+10)
            {
                if (z+q==s+l&&z+l>s+q&&z+s<q)
                {
                u[0]=z;
                u[1]=q;
                u[2]=s;
                u[3]=l;
                t[0]=z;
                t[1]=q;
                t[2]=s;
                t[3]=l;
                }

            }
        }
    }
}

for (j=0;j<3;j++)
{
    for (i=0;i<3-j;i++)
    {
        if (u[i]<u[i+1])
        {n=u[i+1];u[i+1]=u[i];u[i]=n;}
    }

}
for (i=0;i<4;i++)
{
    for (j=0;j<4;j++)
    {
        if (t[j]==u[i])
        {
            switch (j)
            {
               case 0:printf("z %d\n",t[0]);break;
               case 1:printf("q %d\n",t[1]);break;
               case 2:printf("s %d\n",t[2]);break;
               case 3:printf("l %d\n",t[3]);break;
            }
        }
    }

}
//printf("%d %d %d %d",t[0],t[1],t[2],t[3]);
}
