/*
  Name: ??(13-9) ????????
  Author: 1200012757(chenminhuan)
  Date: 30/10/12 09:21
*/


int n,a[maxn],times[200];
int main()
{
    cin>>n;
    for (int i = 0; i < n; ++ i) cin>>a[i]; //??n??? 
    int tot=0;                              //tot??????????                                     
    for (int i = 0; i < n; ++i)             
        if (!times[a[i]])                   //times[a[i]]??a[i]?????????? 
        {                                   //??a[i]?????????????                                          
            tot++;
            times[a[i]]++;                  //??a[i]????? 
            if(tot>1) cout<<" ";
            cout << a[i];
        } 
    return 0;
}
