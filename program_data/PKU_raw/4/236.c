int main()
{
int col,row,array[100][100],a,b,c,d,e;
scanf("%d%d",&row,&col);
for(a=0;a<row;a++)
{
for(b=0;b<col;b++)
{
scanf("%d",&array[a][b]);
}
}
for(c=0;c<col;c++)
{
e=c;
for(d=0;c>=0&&d<row;d++,c--)
{
printf("%d\n",array[d][c]);
}
c=e;
}
for(d=1;d<row;d++)
{
e=d;
for(c=col-1;d<row&&c>=0;c--,d++)
{
printf("%d\n",array[d][c]);
}
d=e;
}
return 0;
}
