 struct 
{
    int x,y,z;
}a[12];

struct 
{
    int x1,x2,y1,y2,z1,z2;
    double l;
}dis[120],t;
void sort(int a)
{
     for (int i=0; i<a; i++)
     for (int j=0; j<a-1-i; j++)
     {
         
         if (dis[j].l < dis[j+1].l)
         {
             t= dis[j];
             dis[j] = dis[j+1];
             dis[j+1] = t;          
         }
     }
     for (int i=0; i<a; i++)
     {  
         cout << "(" << dis[i].x1 << "," << dis[i].y1 << "," << dis[i].z1
         << ")-(" << dis[i].x2 << "," << dis[i].y2 << "," << dis[i].z2 <<
         ")=" << fixed << setprecision(2) << dis[i].l <<endl;
     }
}
         
int main()
{
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a[i].x >> a[i].y >> a[i].z ;
    }
    int count = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            
            dis[count].l = sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)
            *(a[i].y-a[j].y)+(a[i].z-a[j].z)*(a[i].z-a[j].z));
            dis[count].x1 = a[i].x;
            dis[count].x2 = a[j].x;
            dis[count].y1 = a[i].y;
            dis[count].y2 = a[j].y;
            dis[count].z1 = a[i].z;
            dis[count].z2 = a[j].z;
            count++;
        }
    }
    sort (count);           
    cin >> n;
    return 0;
}
        
    
        
       
