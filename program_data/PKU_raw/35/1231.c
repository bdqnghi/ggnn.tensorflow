int main(){
int a,b,i,j,m[8][8],g,p,q,k,o=0,n=0;
char l;
cin>>a>>l>>b;
for(i=0;i<a;i++){
                 for(j=0;j<b;j++){
                                  cin>>m[i][j];}}                                  
for(i=0;i<a;i++){
             g=m[i][0];
                 for(j=0;j<b;j++){                                  
                                  if(m[i][j]>=g){
                                  g=m[i][j];
                                  p=i;
                                  q=j;}}
                                  for(k=0;k<a;k++){
                                                   if(m[p][q]>m[k][q])
                                                   n++;}
                                                   if(n==0){
                                                   cout<<p<<'+'<<q<<endl;
                                                    o++;}}
if(o==0) cout<<"No";
                                              
return 0;
}
