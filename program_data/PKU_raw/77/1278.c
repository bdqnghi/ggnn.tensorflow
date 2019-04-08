
char a[1000];
int n;

int xx (int k)
{
     int x,y;
     x=k;
     y=k+1;
     while (a[y]==a[x])
     y=xx(y);
     cout <<x<<" "<<y<<endl;
     return y+1;
}
     
int main ()
{
    cin.getline(a,999,'\n');
    n=strlen(a);
    int p=0;
    while (1)
    {
          p=xx(p);
          if (p==n)
          break;
    }
    return 0;
}
