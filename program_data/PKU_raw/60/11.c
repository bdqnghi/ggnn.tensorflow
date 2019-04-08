int sushu(int k)
{int i;
for(i=2;i<=sqrt(k);i++)
if(k%i==0)break;
if(i>sqrt(k)) return 1;
else return 0;
}
int main()
{int n,i,b=0;
	scanf("%d",&n);
for(i=2;i<=n-2;i++)
if(sushu(i)&&sushu(i+2)){printf("%d %d\n",i,i+2);b=1;}
if(b==0)printf("empty");

}