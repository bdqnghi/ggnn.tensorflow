long long reverse(int n){
int flag=0;
if (n<0)
flag=1,n=-n;
int a=1,t=0,n1=0;
while (10*a<=n)
a*=10,t++;
for (int i=0;i<=t;i++)
n1+=n/a*(int)pow((double)10,i),n%=a,a/=10;
if (flag==1)
n1=-n1;
return n1;
}
 
int main(){
        int n;
for (int i=1;i<=6;i++)
{
cin >> n;
cout << reverse(n) << endl;
}
        return 0;
}