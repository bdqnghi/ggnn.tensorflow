void panDuan(int);
int main()
{
	int w=1;
	panDuan(w);
	char a[500];
	char e[500][500];
	cin.getline(a,500);
	int i=0,k,j,n,m,g=0,l,t,h=0,y=0,b=0,q=0,r=0,x,z;
	int p[500]={0};
	do
	{
		if(a[i]!='\0')
			i++;
		else
			break;
	}while(1);
	for (k=2;k<i+1;k++)
	{
		for(j=0;j<i-k+1;j++)
		{
			g=0;
			for(m=j,n=j+k-1;;m++,n--)
			{
				if(m>=n||n>=i)
					break;
				if(a[m]==a[n])
				{g++;}		
			}
			t=j,x=t;
			if(g==k/2)
			{
                if(h==0)
				{
					for (l=0; l < k;l++)
					{cout << a[t++];e[y][l]=a[t];}
					y++;
					cout<<'\n';
					h=1;
				}
				else
				{
					for(b=0;b<y;b++)
					{
						for(z=0;z<k;z++)
						{
							if(a[x]==e[b][z])
							{
								p[b]++;
							
							}
							x++;
						}
						
					}
					r=0;
					for(q=0;q<y;q++)
					{
						if(p[q]==k)
						{
							r=1;
						}

					}
					for(q=0;q<10;q++)
						p[q]=0;
					
					if(r!=1)
					{
						for (l=0; l < k;l++)
							{cout << a[t++];e[y][l]=a[t];}
						y++;
						cout<<'\n';
						
					}
				}
			
				
				 
				

			}
		}
	h=0;
	}
	


	
	return 0;
}
void panDuan(int a)
{
	if(a!=1)
		cout<<"false"<<endl;
}
                
