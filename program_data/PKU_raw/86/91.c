
int main(int argc, char *argv[])
{
    int n,m,a[10],sum,you,i,j;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {   sum=0;you=0;
        scanf ("%d",&m);
        if (m==0)
        printf ("60\n");
        else 
        {
        for (j=0;j<m;j++)
        {
            scanf ("%d",&a[j]);
        }
        for (j=0;j<m;j++)
        {
            sum=a[j]+3*j;
            if (sum>=60)
            {
               you=60-3*j;break;
            }   
            else if (sum<57&&j==m-1)
                {you=60-3*(j+1);break;}
            else if (sum>57)
               { you =60-3*j-(60-sum);break;}
        }
        printf ("%d\n",you);
        }
        }
        scanf ("%d",&i);
        return 0;
        }
