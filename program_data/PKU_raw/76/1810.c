int main ()
{
int n,a,b,pau1,pau2;
scanf("%d",&n);
struct haha
{
int begin;
int end;
}
qj[50000];
struct haha pau;
for (int i1=0;i1<n;i1++)
{
    scanf("%d%d",&qj[i1].begin,&qj[i1].end);
}
for (int i3=0;i3<n;i3++)
{
   for (int i4=n-1;i4>0;i4--)
      {
        if (qj[i4].begin<qj[i4-1].begin)
           {pau1=qj[i4].begin;qj[i4].begin=qj[i4-1].begin;qj[i4-1].begin=pau1;pau2=qj[i4].end;qj[i4].end=qj[i4-1].end;qj[i4-1].end=pau2;}
      }
}

for (int i2=0;i2<n;i2++)
{
    for (int i5=i2+1;i5<n;i5++)
    {
        if (qj[i2].begin==qj[i5].begin&&qj[i2].end==qj[i5].end){for (int jj=i5;jj<n;jj++)
{qj[jj]=qj[jj+1];}n--;}
        if (qj[i2].end>=qj[i5].begin){if(qj[i5].end>qj[i2].end){qj[i2].end=qj[i5].end;}for (int jj=i5;jj<n;jj++)
{qj[jj]=qj[jj+1];}n--;i5=i2;}

    }
}
if (n==1){printf("%d %d",qj[0].begin,qj[0].end);}else{printf("no");}
return 0;
}

