int s(int x);
int main(){
int n,i,b=0;
scanf("%d",&n);
for(i=1;i<=n-2;i++){
if(s(i)&&s(i+2))
{b=1;printf("%d %d\n",i,i+2);}
}
if(b==0){printf("empty");}
return 0;
}
int s(int x){
int j,a=0;
for(j=1;j<=x;j++){if(x%j==0){a++;}}
if(a==2){return x;}
else return false;

}