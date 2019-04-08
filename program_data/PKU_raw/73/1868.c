int min(int a,int b,int c,int d,int e)
{
	int min;
	min=a<b?a:b;
	min=min<c?min:c;
	min=min<d?min:d;
	min=min<e?min:e;
	return(min);
}
int main()
{
    int a[5][5];
    int i,j;
    for(i=0;i<5;i++)
    	for(j=0;j<5;j++)
    		cin>>a[i][j];
    for(i=0;i<5;i++)
    {
    j=a[i][0]>a[i][1]?0:1;
    j=a[i][j]>a[i][2]?j:2;
    j=a[i][j]>a[i][3]?j:3;
    j=a[i][j]>a[i][4]?j:4;
    if(a[i][j]==min(a[0][j],a[1][j],a[2][j],a[3][j],a[4][j])){
    		cout<<i+1<<" "<<j+1<<" "<<a[i][j]<<endl;
    		break;}
    if(i==4)
            	cout<<"not found"<<endl;
    }
    return 0;
}