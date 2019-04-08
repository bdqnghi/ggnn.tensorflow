int main ()
{
    int a[100][100],b[100][100],c[100][100];
    int x1,y1,x2,y2,x3,y3;
    int i,j,q;
    scanf("%d %d",&x1,&y1);
    for (i=0;i<x1;i++)
        {for (j=0;j<y1;j++)
             {scanf("%d",&a[i][j]);
             if (j<(y1-1))
                scanf(" ");}
        }
    i=0;j=0;
    scanf("%d %d",&x2,&y2);
    for (i=0;i<x2;i++)
        {for (j=0;j<y2;j++)
             {scanf("%d",&b[i][j]);
             if (j<(y2-1))
                scanf(" ");}
        }
    x3=x1;y3=y2;
    i=0;j=0;q=0;
    for (i=0;i<x3;i++)
        {for (j=0;j<y3;j++)
             {c[i][j]=0;
             for (q=0;q<y1;q++)
                  c[i][j]=c[i][j]+a[i][q]*b[q][j];
                  q=0;
             }
        }
    i=0;j=0;
    for (i=0;i<x3;i++)
        {for (j=0;j<y3;j++)
             {printf("%d",c[i][j]);
             if (j<(y3-1))
                printf(" ");
             else
                 printf("\n");
             }
        }
}             