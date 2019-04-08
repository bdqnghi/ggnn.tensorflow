int main(){
int n,m;
int result=0;
scanf("%d",&n);
for(int i=0;i<=n;i++){
	m=i%7;
	
if(i!=7&&i!=17&&i!=27&&i!=37&&i!=47&&i!=57&&i!=67&&i!=71&&i!=72&&i!=73&&i!=74&&i!=75&&i!=76
   &&i!=78&&i!=79&&i!=87&&i!=97&&m!=0){
result+=i*i;}
}
printf("%d",result);
return 0;
}