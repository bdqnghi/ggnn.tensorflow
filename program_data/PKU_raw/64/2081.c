




int main()
{
    int n, i, j, k, m = 0;
    double taoyan[100];
    struct ss
    {
        int x;
        int y;
        int z;
        double jl[10];
    }zz[10];
    cin >> n;
    for(int i = 0; i < n; ++i)
    cin >> zz[i].x >> zz[i].y >> zz[i].z;
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
        {
            int a = (zz[i].x - zz[j].x) * (zz[i].x - zz[j].x) + (zz[i].y - zz[j].y)
                    * (zz[i].y - zz[j].y) + (zz[i].z - zz[j].z) * (zz[i].z - zz[j].z);
            zz[i].jl[j] = sqrt(a);
            taoyan[m ++] = zz[i].jl[j];
        }
    sort(taoyan, taoyan + m);
    for(k = m ; k >= 0; k--)
    {
        for(i = 0; i < n - 1; ++i)
            for(j = i + 1; j < n; ++j)
            {
                if(zz[i].jl[j] == taoyan[k])
                {
                    cout << "(" << zz[i].x << "," << zz[i].y << "," << zz[i].z << ")-(" <<
                    zz[j].x << "," << zz[j].y << "," << zz[j].z << ")=" << fixed << setprecision(2)
                    << zz[i].jl[j] << endl;
                    zz[i].jl[j] = 0;
                }

            }

    }


    return 0;
}
