void main()
{
int check(int b[5][5],int k);
int i,j,k,m,n,t;

int a[5][5];
for(i=0;i<5;i++)
   for(j=0;j<5;j++)
	   scanf("%d",&a[i][j]);
scanf("%d %d",&n,&m);
if(check(a,n)==1&&check(a,m)==1)
{ for(i=0;i<5;i++)
  {
  t=a[n][i];
  a[n][i]=a[m][i];
  a[m][i]=t;
  }
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
	 { printf("%d",a[i][j]);
     if(j<4)
		 printf(" ");}
printf("\n");}
}
else
printf("error");
}

check(int b[5][5],int k)
{
int flag=0;
if (k>=0&&k<=4)
  flag=1;
return(flag);

}