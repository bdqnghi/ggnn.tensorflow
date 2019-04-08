/**
 *@file 1.cpp
 *@author ???
 *@date 2013-12-03
 *@description ?????
 */

int n, k,ans=0, i=0;

int fen(int x)
{
    
    
        if(x==1)
          return 1;
        
        else
        {
            if(ans%(n-1)==0)
            {
                ans=ans/(n-1)*n+k;
                return fen(x-1);
            }
            else  return 0;
        
        }

}


int main()
{
    cin >> n >> k;
    while(1)
    {
        ans=i*n+k;
        if(fen(n))
        {cout << ans << endl;break;}
        i++;
    }
    return 0;
}
