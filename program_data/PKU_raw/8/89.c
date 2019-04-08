void input(int array[],int n)
{int i;
for(i=0;i<=n-2;i++)
{
 scanf("%d ",&array[i]);}
 scanf("%d\n",&array[n-1]);}
void order(int array[],int n)
{int i,o,e;
 for(i=0;i<=n-2;i++)
{for(o=i+1;o<=n-1;o++)
 {if(array[i]>array[o]){e=array[i];array[i]=array[o];array[o]=e;}
}}}
void output(int array[],int n)
{int i;
for(i=0;i<=n-2;i++)
{printf("%d ",array[i]);}
 printf("%d",array[n-1]);}
void main()
{int a[20],b[20],q,w;
 scanf("%d %d\n",&q,&w);
 input(a,q);
 input(b,w);
 order(a,q);order(b,w);
 output(a,q);printf(" ");output(b,w);}
