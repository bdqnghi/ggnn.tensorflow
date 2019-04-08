
int main()
{
int sw(int a[5][5],int n,int m);
int i,j,m,n,a[5][5],q,h;
if(sw(a,n,m)==0)printf("error");
else {for(q=0;q<5;q++){
for(h=0;h<4;h++)
printf("%d ",a[q][h]);
printf("%d",a[q][4]);
printf("\n");
}}
return 0;}



int sw(int a[5][5],int n,int m)
{
	int i,j,q,h;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
scanf("%d",&a[i][j]);
scanf("%d%d",&n,&m);
	int p,t;

if(n>=0&&n<5&&m>=0&&m<5){
for(p=0;p<5;p++){
t=a[n][p];a[n][p]=a[m][p];a[m][p]=t;
}
return 1;}
return 0;
	
	
}


