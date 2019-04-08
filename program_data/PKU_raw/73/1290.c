int main()
{int a[5][5];
int i,j,max,k,q,r=0;
for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		cin>>a[i][j];
for(i=0;i<5;i++)
{max=a[i][0];q=0;
for(j=1;j<5;j++)
{if(a[i][j]>max)
	{max=a[i][j];q=j;}}
 for(k=0;k<5;k++)
	 {if(k==i)
		 continue;
	  if(a[k][q]<=a[i][q])
		  break;
           if(a[k][q]>a[i][q])
                continue;}
  if(k==5)
  { cout<<i+1<<" "<<q+1<<" "<<a[i][q]<<endl;r++;}
}if(r==0)
	cout<<"not found"<<endl;
return 0;
	}
