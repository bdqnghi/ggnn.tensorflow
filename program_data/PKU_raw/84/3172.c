
void insert(int *ma,int tem)
{
if (tem>ma[0]){ ma[1]=ma[0];ma[0]=tem;}
else if (tem>ma[1]){ ma[1]=tem;}
}


int main()
{
int n,i;
int temp,max[2]={0,0};
scanf("%d",&n);
for (i=1;i<=n;i++){
     scanf("%d",&temp);
     if (temp>max[0]){ max[1]=max[0];max[0]=temp;}
     else if (temp>max[1]){ max[1]=temp;}
     }
 printf("%d\n%d",max[0],max[1]);
return 0;
}
