 
int a[9][9],b[9][9];
int main ()
{void F(int x, int y);
    int p,q,i,j,t,m,n;
    for (i=0;i<9;i++)
    for (j=0;j<9;j++)
    {a[i][j]=0;b[i][j]=0;}
    scanf("%d %d",&m,&n);
    a[4][4]=m;
    for (t=1;t<=n;t++)
    {   for (p=0;p<9;p++)
        for (q=0;q<9;q++)
        b[p][q]=0;
     
        for (i=0;i<9;i++)
        for (j=0;j<9;j++)
        F (i,j);   
        for (p=0;p<9;p++)
        for (q=0;q<9;q++)
        a[p][q]+=b[p][q];
    } 
    for (i=0;i<9;i++)
    {for (j=0;j<8;j++)
    printf("%d ",a[i][j]);
    printf("%d\n",a[i][8]);
    }
}
void F(int x, int y)
{   int i,j,m;
    if   (a[x][y]>0)
     {m=a[x][y];
     for (i=-1;i<2;i++)
     for (j=-1;j<2;j++)
     b[x+i][y+j]+=m;}
}
     
    
