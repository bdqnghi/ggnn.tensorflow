/*
  Name: ??(5-5) ????
  Author: 120012757(chenminhuan)
  Date: 15/10/12 18:28
*/

int n,ans,cnt,a,b;
int main()
{
   
    cin>>n;                                             //read in times
    ans = 0;                                            // answer
    cnt = 0;                        
    while (n--){
          cin>>a>>b;
          if(a>=90 && a<=140 && b>=60 && b<=90) cnt++;  
          else
          {
              if(cnt>ans) ans = cnt;
              cnt = 0;
          }
    }
    if (cnt>ans) ans = cnt;
    cout<<ans<<endl;
    return 0;
}