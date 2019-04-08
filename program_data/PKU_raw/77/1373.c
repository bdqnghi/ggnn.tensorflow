char a[110]={0};
int x[110][2]={0};
int i,j,l,k=0;
int f()
{
	for(i=0;i<l-1;i++)
	{
			for(j=1;i+j<l;j++)
			{
				if(a[i]==a[0]&&a[i+j]==' ') {continue;}
				if(a[i]==a[0]&&a[i+j]==a[0]) {break;}
				if(a[i]==a[0]&&a[i+j]==a[l-1]) 
				{
					x[k][0]=i;x[k][1]=i+j;k++;a[i+j]=' ';a[i]=' ';
				}
			}  
	}
	if(k!=l/2) {f();}
	if(k==l/2) {return 0;}
}
int main()
{
	cin.getline(a,110,'\n');
	l=strlen(a);
	f();
	for(i=0;i<l/2-1;i++)
	{
		for(j=0;j<l/2-1-i;j++)
		{
			if(x[j][1]>x[j+1][1])
			{
				k=x[j][1];x[j][1]=x[j+1][1];x[j+1][1]=k;
				k=x[j][0];x[j][0]=x[j+1][0];x[j+1][0]=k;
			}
		}
	}
	for(i=0;i<l/2;i++)
	{
		cout<< x[i][0] <<" "<< x[i][1] <<endl;
	}
	return 0;
}