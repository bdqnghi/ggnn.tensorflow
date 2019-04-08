int main()
{
int row,col;
cin>>row>>col;
int shuzu[100][100];
int p=0,q=0,count=0;
for(p=0;p<row;p++)
	for(q=0;q<col;q++){cin>>shuzu[p][q];}
for(;row-count>0&&col-count>0;)
{
p=count;for(q=count;q<col;q++){cout<<shuzu[p][q]<<endl;}
if(row==count+1)return 0;
q=col-1;for(p=count+1;p<row;p++){cout<<shuzu[p][q]<<endl;}
if(col==1+count)return 0;
p=row-1;for(q=col-2;q>=count;q--){cout<<shuzu[p][q]<<endl;}
q=count;for(p=row-2;p>count;p--){cout<<shuzu[p][q]<<endl;}
row--;col--;count++;
}
return 0;
}