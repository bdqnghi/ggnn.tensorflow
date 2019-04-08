int main()
{
    int n;
    int xs[100][100];
    int i,j,x1,x2,y1,y2,S;
    scanf("%d",&n);
    y1=0;
    y2=n+1;
    for(i=0;i<n;i++)
       {for(j=0;j<n;j++)
        scanf("%d",&xs[i][j]);
       }
    for(i=0;i<n;i++)
       {x1=1;
        y1++;
        for(j=0;j<n;j++)
           {if(xs[i][j])x1++;
            else {j=n;i=n;}
           }
        }
    for(i=n-1;i>=0;i--)
       {x2=n;
        y2--;
        for(j=n-1;j>=0;j--)
           {if(xs[i][j])x2--;
            else {j=-1;i=-1;}
           }
        }
    S=(y2-y1-1)*(x2-x1-1);
    printf("%d",S);
    return 0;
}
