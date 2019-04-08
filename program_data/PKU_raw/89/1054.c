int main()
{
int n,i,j,k=0,P[10000]={0};
scanf ("%d",&n);
/*int*P=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
P[i]=0;                
}*/
for (;;)
{
scanf ("%d%d",&i,&j);
if (i==0&&j==0)
break;
P[j]++;
if (P[j]==(n-1))
{
printf("%d",j);k=1;break;}

}     
if(k==0)
printf("NOT FOUND") ;
}
