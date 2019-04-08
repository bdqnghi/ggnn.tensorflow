int main()
{
int a[100][100],row,col,i,j,c=1;
int *p=a[0];
cin>>row>>col;
for(i=0;i<row;i++)
for(j=0;j<col;j++)
cin>>a[i][j];
for(i=0;i<row*col;i++)
{
cout<<*p<<endl;
if((p-a[0])%100==0||(p-a[0])/100>=row-1)
{
c++;
if(c<=col)p=a[0]+c-1;
else p=a[0]+(c-col)*100+col-1;
}
else p=p+99;
}
return 0;
}
