int main()
{
    int a[100][100],i,j,k,n;
    int rowMin,colMin;
    int x;
    int first;
    int sum;
    int flag;

    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        //??????
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        //================================
        /*printf("\n\n\n----?%d???----\n",k);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }*/
        //================================
        sum=0;
        //???????????n-1????????????x
        for(x=n;x>1;x--)
        {
            //????
            for(i=0;i<x;i++)
            {
                first=1;//???????????????????
                flag=0;//??????????0????flag==0????0??
                for(j=0;j<x;j++)
                {
                    if(a[i][j]>0)
                    {
                        if(first==1)  {rowMin=a[i][j];   first=0;}
                        else if(a[i][j]<rowMin)    rowMin=a[i][j];
                    }
                    else
                    {
                        flag=1;//0????
                        break;
                    }
                }
                if(flag==0)//????0????????
                {
                    for(j=0;j<x;j++)
                    {
                        if(a[i][j]>0)  a[i][j]=a[i][j]-rowMin;
                    }
                }

            }
            //????
            for(j=0;j<x;j++)
            {
                first=1;//???????????????????
                flag=0;
                for(i=0;i<x;i++)
                {
                    if(a[i][j]>0)
                    {
                        if(first==1)  {colMin=a[i][j];   first=0;}
                        else if(a[i][j]<colMin)    colMin=a[i][j];
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    for(i=0;i<x;i++)
                    {
                        if(a[i][j]>0)  a[i][j]=a[i][j]-colMin;
                    }
                }
            }
            //================================
            /*printf("\n----?%d????----\n",x);
            for(i=0;i<x;i++)
            {
                for(j=0;j<x;j++)
                {
                    printf("%d ",a[i][j]);
                }
                printf("\n");
            }*/
            //================================
            sum=sum+a[1][1];
            //?????
            i=0;
            for(j=2;j<x;j++)
                a[i][j-1]=a[i][j];
            j=0;
            for(i=2;i<x;i++)
                a[i-1][j]=a[i][j];
            for(i=2;i<x;i++)
            {
                for(j=2;j<x;j++)
                {
                    a[i-1][j-1]=a[i][j];
                }
            }
            //================================
            /*printf("\n----?%d????----\n",x);
            for(i=0;i<x-1;i++)
            {
                for(j=0;j<x-1;j++)
                {
                    printf("%d ",a[i][j]);
                }
                printf("\n");
            }*/
            //================================
        }
        printf("%d\n",sum);
    }
	return 0;
}
