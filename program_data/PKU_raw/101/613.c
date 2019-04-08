
int main()
{
    char a[5];
    int i,j,k;
    for (i=1; i<=3; i++)
        for (j=1; j<=3; j++)
        {

            if (i!=j)
            {
                k=6-i-j;

                if (3-i==(j>i)+(k==i) && 3-j==(i>j)+(i>k) && 3-k==(k>j)+(j>i))
                {

                    a[i] = 'A';
                    a[j] = 'B';
                    a[k] = 'C';
                    for (i=1; i<=3; i++)
                        printf("%c",a[i]);
                    break;
                }
            }
        }
    return 0;
}
