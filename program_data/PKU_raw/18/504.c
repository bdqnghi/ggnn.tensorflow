int minx[1000],miny[1000];
 int n,m,a[105][105],b[105][105];
void calc_min(){
     for(int i=0;i<m;i++){
             minx[i]=100000;miny[i]=100000;
             }
     for(int i=0;i<m;i++)
             for(int j=0;j<m;j++){
                     if(a[i][j]<minx[i])minx[i]=a[i][j];
                     //if(a[i][j]<miny[j])miny[j]=a[i][j]; 
             }       
     for(int i=0;i<m;i++)
             for(int j=0;j<m;j++)
                     a[i][j]-=minx[i];                
     for(int i=0;i<m;i++)
             for(int j=0;j<m;j++){
                     //if(a[i][j]<minx[i])minx[i]=a[i][j];
                     if(a[i][j]<miny[j])miny[j]=a[i][j]; 
             }       
     for(int i=0;i<m;i++)
             for(int j=0;j<m;j++)
                     a[i][j]-=miny[j];    
     
}
void calc_delete(){

     for(int i=0;i<m;i++)
             if(i-1!=0)
                    for(int j=0;j<m;j++){
                            if(j==1)continue;
                            int x=i,y=j;
                            if(x)x--;
                            if(y)y--;
                            b[x][y]=a[i][j];
                    }                
     m--;
     for(int i=0;i<m;i++)
             for(int j=0;j<m;j++)
                     a[i][j]=b[i][j];
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
            int ans=0;
            for(int j=0;j<n;j++)        
                    for(int k=0;k<n;k++)
                            cin>>a[j][k];
            m=n;
           
            while(m>2){
                       
                       calc_min();
                       ans+=a[1][1];
                       calc_delete();
            }
            calc_min();
            ans+=a[1][1];
            cout<<ans<<endl;
    }
    
    //cin>>n;
    
    return 0;    
}


