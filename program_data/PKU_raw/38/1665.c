   

int main()
{
    int k;
    scanf("%d", &k);
    int kk;
    for(kk = 1; kk <= k; kk++)
    {
           int n;
           scanf("%d", &n);
           
           double *data = (double *) malloc(sizeof(double) * n);
           
           int i;
           double sum = 0;
           
           for(i = 0; i <= n - 1; i++)
           {
                 scanf("%lf", data + i);
                 sum = sum + *(data + i);
           }
           
           
           double mean = sum / (1.0 * n);
           
           double total = 0;
           for(i = 0; i <= n - 1; i++)
           {
                 total = total + pow(*(data + i) - mean, 2);
           }
           
           total = sqrt( total / (1.0 * n) );
           printf("%.5f\n", total);
    }
           
 
    return 0;
}

