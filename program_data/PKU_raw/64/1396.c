//********************************
//*???????                 **
//*?????? 1200012839        **
//*???2012.12.10              **
//********************************
int main()
{
    int n, k = 0;
    cin >> n;
    struct point
    {
        int x;
        int y;
        int z;
    }point[n];
    struct distance
    {
        int pointa;
        int pointb;
        double d;
    }dis[4950],temp;
    for (int i = 0; i < n; i++)
    {
        cin >> point[i].x >> point[i].y >> point[i].z;
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            dis[k].d = sqrt((point[i].x - point[j].x) * (point[i].x - point[j].x)
                          + (point[i].y - point[j].y) * (point[i].y - point[j].y)
                          + (point[i].z - point[j].z) * (point[i].z - point[j].z));
            dis[k].pointa = i;
            dis[k].pointb = j;
            k++;
        }
    }
    for (int i = 0; i < n * (n - 1) / 2 - 1; i++)
    {
        for (int j = i + 1; j < n * (n - 1) / 2; j++)
        {
            if (dis[i].d < dis[j].d)
            {
                temp = dis[i];
                dis[i] = dis[j];
                dis[j] = temp;
            }
            if (dis[i].d == dis[j].d && (dis[i].pointa > dis[j].pointa || dis[i].pointb > dis[j].pointb))
            {
                temp = dis[i];
                dis[i] = dis[j];
                dis[j] = temp;
            }
        }
    }
    for (int i = 0; i < n * (n - 1) / 2; i++)
    {
        cout << "(" << point[dis[i].pointa].x << "," << point[dis[i].pointa].y << "," << point[dis[i].pointa].z << ")" << "-"
             << "(" << point[dis[i].pointb].x << "," << point[dis[i].pointb].y << "," << point[dis[i].pointb].z << ")" << "="
             << fixed << setprecision(2) << dis[i].d << endl;
    }
    return 0;
}