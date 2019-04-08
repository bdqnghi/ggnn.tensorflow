void f(int t){
char c[100];
if(scanf("%s",c)!=EOF){f(0);

cout<<c;if(!t)cout<<' ';}
}
int main(){
f(1);

return 0;
}
