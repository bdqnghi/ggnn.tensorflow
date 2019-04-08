

///???//
int iIndex,iIndex1,iCount;
int i,j,k,l,m,n;//???????
double x[1000];
double y[1000];
double MaxDistance,NowDistance;
/////////////
/* ???????
void Input()
{
ifstream fin("D:\\Brother\\Kon\\Debug\\message.in");
fin>>iCount;
for (i=0; i<iCount; i++)
fin>>x[i]>>y[i];
fin.close();
}
*/

void _Calculate()
{
for(i=0;i<iCount;i++)
{
for(j=i;j<iCount;j++)
{
NowDistance = sqrt( ( x[i] - x[j] )*( x[i] - x[j] ) + ( y[i] - y[j] )*( y[i] - y[j] ) );
if (NowDistance > MaxDistance) 
{MaxDistance=NowDistance;}
}
}
}
int main(int argc, char* argv[])
{

MaxDistance=-1;
//iIndex=0;iIndex1=0;
/* ??(x[iIndex],y[iIndex])
  ???????-1????????~???????????*/
//->??????????printf("Hello World!\n");
// ??????????Input();


scanf("%d",&iCount);


for (i=0;i<iCount;i++)
{

cin>>x[i]>>y[i];
}

_Calculate();

cout << MaxDistance<<endl;

return 0;
}
       

