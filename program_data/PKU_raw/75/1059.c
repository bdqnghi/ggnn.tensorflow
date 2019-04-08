// 3.cpp : ??????????????
//

char x[5000],y[5000];     //x?y????????

int vis[1010]={0};     //????
int xx[1001]={0};        //????????????
int yy[1001]={0};
int main()
{
    //freopen("1.in","r",stdin);
    //freopen("1.out","w",stdout);
    cin.getline(x,5000);
    cin.getline(y,5000);
    int lenx=strlen(x),leny=strlen(y);
    int ans1=1;  //   ??
    for(int i=0;i<lenx;i++)
      if(x[i]==',') ans1++;
    cout<<ans1<<" ";
    int k=0;int t=1;
    
    for(int i=lenx-1;i>=0;i--)
     {  
         if(x[i]!=',') 
        {
            xx[k]+=(x[i]-'0')*t;         
            t=t*10;
        }
        else 
        {
             t=1;
             k++;
        }
     }
     k=0;t=1;
     for(int i=leny-1;i>=0;i--)
     {  
         if(y[i]!=',') 
        {
            yy[k]+=(y[i]-'0')*t;         
            t=t*10;
        }
        else 
        {
             t=1;
             k++;
        }
     }    
    for(int i=0;i<k+1;i++)
      for(int j=xx[i];j<yy[i];j++)
        vis[j]++;
    int max=vis[0];
    for(int j=0;j<1010;j++)
      if(vis[j]>max) max=vis[j];
    cout<<max<<endl;
    return 0;
}
