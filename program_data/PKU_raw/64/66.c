// ?????? ???1000010500 
// ???? 
// 2010-12-20

struct point                   // ????? 
{
       int x,y,z;
}dot[10];
int main()
{
    int n,i,j,k,p,q;
    double distance[10][10],t,max,min = 200;
    cin >> n;
    for (i = 0;i < n;i++)                             // ???? 
        cin >> dot[i].x >> dot[i].y >> dot[i].z;
    for (i = 0;i < n - 1;i++)                         // ???i??j??? 
        for (j = i + 1;j < n;j++)
        {
            distance[i][j] = sqrt((dot[i].x - dot[j].x) * (dot[i].x - dot[j].x) 
                                + (dot[i].y - dot[j].y) * (dot[i].y - dot[j].y) 
                                + (dot[i].z - dot[j].z) * (dot[i].z - dot[j].z));
            // ?????????? 
            min = (distance[i][j] < min) ? distance[i][j] : min; 
        }
    for (k = 0;k < n * (n - 1) / 2;k++)               // ????????? 
    {
        max = min;
        for (i = n - 2;i >= 0;i--)
            for (j = n - 1;j >= i + 1;j--)
            {
                if (max <= distance[i][j])
                {
                                 max = distance[i][j];
                                 p = i;
                                 q = j;
                }       
            }
        cout << "(" << dot[p].x << "," << dot[p].y << "," << dot[p].z << ")-(" 
                    << dot[q].x << "," << dot[q].y << "," << dot[q].z << ")="
                    << fixed << setprecision(2)<< distance[p][q] << endl;
        distance[p][q] = 0;
    }
    return 0;
}
    
