main()
{
int n;
while (1)
{
int a[1005],b[1005],i,j,ua[1005]={0},ub[1005]={0};
scanf("%d",&n);
if (n==0) break;//loop condition
//"a" stores the king's horses' data;"b" stores Tianji's hores' data
//ua[i] means whether horse[i] has raced

//begin{readdata}
for (i=1;i<=n;i++)
scanf("%d",&b[i]);

for (i=1;i<=n;i++)
scanf("%d",&a[i]);
//end{readdata}

//begin{sort(a)}[small->large]
for (i=1;i<n;i++)
for (j=i+1;j<=n;j++)
if (a[i]>a[j]) {int t=a[i]; a[i]=a[j]; a[j]=t;}
//end{sort(a)}

//begin{sort(b)}[small->large]
for (i=1;i<n;i++)
for (j=i+1;j<=n;j++)
if (b[i]>b[j]) {int t=b[i]; b[i]=b[j]; b[j]=t;}
//end{sort(b)}

int win=0,draw=0;
//begin{calculate(win)}
for (i=1;i<=n;i++)
for (j=n;j>=1;j--)//use Tianji's worst to win the king's best
if (b[i]>a[j]&&!ub[i]&&!ua[j]) 
{win+=1; ub[i]=1; ua[j]=1;}
//end{calculate(win)}

//begin{calculate(draw)}
for (i=1;i<=n;i++)
for (j=1;j<=n;j++)
if (a[i]==b[j]&&!ua[i]&&!ub[j]) 
{draw+=1; ua[i]=1; ub[j]=1;}
//end{calculate(draw)}
int ans=(win-(n-win-draw))*200;
printf("%d\n",ans);//printanswer
}
}
