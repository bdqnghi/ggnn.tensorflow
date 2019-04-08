int main(){
int m;
scanf("%d",&m);
int sz[6]={100,50,20,10,5,1};
for(int i=0;i<=5;i++){
 if(m>=sz[i]){
 printf("%d\n",m/sz[i]);
 m-=(m/sz[i])*sz[i];}
 else 
 {printf("%d\n",0);}
}
return 0;
}


