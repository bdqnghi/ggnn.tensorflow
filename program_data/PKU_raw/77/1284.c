
char a[1000];//????? 

int xx (int k)
{
     int x=k,y=k+1;//??????? 
     while (a[y]==a[x])//????????? 
     y=xx(y);
     cout <<x<<" "<<y<<endl;//?? 
     return y+1;
}

int main ()
{
    cin.getline(a,999,'\n');
    xx(0);
    return 0;
}
