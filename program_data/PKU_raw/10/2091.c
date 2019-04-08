
int n;
int *h;
int *m;
int max=0;

void calc(int num)
{
int i;
*(m+num)=1;
for(i=num+1;i<=n-1;i++)
if(*(h+i)<=*(h+num))
if(*(m+i)+1>*(m+num))
*(m+num)=*(m+i)+1;
if(*(m+num)>max)
max=*(m+num);
}

main()
{
int i;
scanf("%d",&n);
h=(int *)malloc(sizeof(int)*n);
m=(int *)malloc(sizeof(int)*n);
for(i=0;i<=n-1;i++)
scanf("%d",h+i);
*(m+n-1)=1;
for(i=n-2;i>=0;i--)
calc(i);
printf("%d",max);
} 