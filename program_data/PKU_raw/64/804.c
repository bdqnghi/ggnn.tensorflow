
struct point
{
    int x;
    int y;
    int z;
} p[100];

struct line
{
    int p1;
    int p2;
    double len;
} l[1000];

int main()
{
    int n, i, j, d[1000], c = 0;
    double temp;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> p[i].x >> p[i].y >> p[i].z;
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            l[c].len = sqrt ( (p[i].x - p[j].x) * (p[i].x - p[j].x) + (p[i].y - p[j].y) * (p[i].y - p[j].y) + (p[i].z - p[j].z) * (p[i].z - p[j].z));
            l[c].p1 = i;
            l[c].p2 = j;
            c++;
        }
    }
    for (i = 0; i < n * (n - 1) / 2; i++)
    {
        for (j = 0; j < n * (n - 1) / 2 - i; j++)
        {
            if (l[j].len < l[j + 1].len )
            {
                temp = l[j].len;
                l[j].len = l[j + 1].len;
                l[j + 1].len = temp;
                temp = l[j].p1;
                l[j].p1 = (int) l[j + 1].p1;
                l[j + 1].p1 =(int) temp;
                temp = l[j].p2;
                l[j].p2 = (int) l[j + 1].p2;
                l[j + 1].p2 =(int) temp;
            }
        }
    }
    for (i = 0; i < n * (n - 1) / 2; i++)
    {
        cout << "(" << p[l[i].p1].x << "," << p[l[i].p1].y << "," << p[l[i].p1].z << ")-(" << p[l[i].p2].x << "," << p[l[i].p2].y << "," << p[l[i].p2].z << ")=" << fixed << setprecision(2) << l[i].len << setprecision(0) << endl;
    }
    return 0;
}
