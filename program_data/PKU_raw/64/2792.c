int a[1001][1001],b[1001][1001],c[1001][1001];
double s[1000001][3];
struct {
       double x,y,z;
}point[10001];
double dis(int i,int j)//???? 
{
       return sqrt((point[i].x-point[j].x)*(point[i].x-point[j].x)+
       (point[i].y-point[j].y)*(point[i].y-point[j].y)+
       (point[i].z-point[j].z)*(point[i].z-point[j].z));
}
void change(int n)//??? 
{
     double temp;
     temp=s[n][0];
     s[n][0]=s[n+1][0];
     s[n+1][0]=temp;
     temp=s[n][1];
     s[n][1]=s[n+1][1];
     s[n+1][1]=temp;
     temp=s[n][2];
     s[n][2]=s[n+1][2];
     s[n+1][2]=temp;
}
void print (int n)//?? 
{
     int lt=(int)(s[n][1]),rt=(int)(s[n][2]);
     cout<<"("<<point[lt].x<<','<<point[lt].y<<','<<point[lt].z<<")";
     cout<<'-';
     cout<<"("<<point[rt].x<<','<<point[rt].y<<','<<point[rt].z<<")";
     cout<<'=';
     printf("%.2f\n",s[n][0]);
}
void bubblesort(int k)//?? 
{
 	 int i,j;
 	 for(i=1;i<k;i++)
    for(j=1;j<=k-i;j++)
    if(s[j][0]<s[j+1][0])
    change(j);
}
int main()
{
    int n,m;
    cin>>n;
    int i,j,k;
    for(i=1;i<=n;i++)
    cin>>point[i].x>>point[i].y>>point[i].z;
    k=1;
    for(i=1;i<=n;i++)
    for(j=i+1;j<=n;j++){
                        s[k][0]=dis(i,j);
                        s[k][1]=i;
                        s[k][2]=j;
                        k++;
                        }
    k--;
	bubblesort(k);
	for(i=1;i<=k;i++)
    print(i);
    return 0;
}