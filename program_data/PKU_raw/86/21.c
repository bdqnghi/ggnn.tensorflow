int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{int x;
	scanf("%d",&x);
	int s[20];
	for(int k=0;k<x;k++)
	{scanf("%d",&s[k]);}
	int t;
int m=x;
if(s[m-1]+m*3<=60)
t=60-3*m;
else 
{while(s[m-1]+m*3-3>60){
	m=m-1;}
if(s[m-1]+m*3-3>=57)
t=s[m-1];
else 
t=60-3*m;}
printf("%d\n",t);
	
	}return 0;
}