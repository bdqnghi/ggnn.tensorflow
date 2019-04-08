int main()
{
int a[5][5];
int i,j,max,min,col1,andian,k;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
cin>>a[i][j];

for(i=0;i<5;i++)
{max=a[i][0];col1=0;
for(j=0;j<5;j++)
	if(a[i][j]>max)
		{max=a[i][j];

col1=j;}
andian=1;
for(k=0;k<5;k++)
if(max>a[k][col1])
	{andian=0;
continue;
}
if(andian==1)
{cout<<i+1<<" "<<col1+1<<" "<<max<<endl;
break;}
}
if(andian!=1)
cout<<"not found"<<endl;
return 0;
}





