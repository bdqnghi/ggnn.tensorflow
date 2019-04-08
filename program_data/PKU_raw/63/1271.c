int main()
{
    int a1,b1,a2,b2;
    scanf("%d %d",&a1,&b1);                  //?????a1?????
    int **p=(int **)malloc(a1*sizeof(int *));
    for(int i1=0;i1<=a1-1;i1++)
    {
        p[i1]=(int *)malloc(b1*sizeof(int)); //????????????????
    }
    int i3;
    for(int i2=0;i2<=a1-1;i2++)
    {
        for(i3=0;i3<=b1-1;i3++)
        {
            scanf("%d",&p[i2][i3]);    //????A
        }
    }                             
    scanf("%d %d",&a2,&b2);                 //?????a2?????
    int **q=(int **)malloc(a2*sizeof(int *));
    for(int j1=0;j1<=a2-1;j1++)
    {
        q[j1]=(int *)malloc(b2*sizeof(int)); //????????????????
    }
    int j3;
    for(int j2=0;j2<=a2-1;j2++)
    {
        for(j3=0;j3<=b2-1;j3++)
        {
            scanf("%d",&q[j2][j3]);    //????B
        }
    }
    int **r=(int **)malloc(a1*sizeof(int *)); //?????????C 
    for(int k=0;k<=a1-1;k++) 
    {
        r[k]=(int *)malloc(b2*sizeof(int));
    }
    int z,y,x;                           //????
    for(z=0;z<=a1-1;z++)
    {
        for(y=0;y<=b2-1;y++)                            
        {
            r[z][y]=0;
            for(x=0;x<=a2-1;x++)
            {
                r[z][y]=r[z][y]+(p[z][x])*(q[x][y]);
            }
        }
    }
    int v;                            //???? 
    for(int w=0;w<=a1-1;w++)
    {
            for(v=0;v<=b2-2;v++)
            {
                printf("%d ",r[w][v]);
            }
            if(v==b2-1)
            {
                printf("%d",r[w][v]);
            } 
            printf("\n");
    } 

}