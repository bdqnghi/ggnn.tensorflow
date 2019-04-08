int yue(int n,int m)
{
	int b[100000]={0};
	
	int k,s=0,t,p;
	t=n;
	for(k=0,p=m;;k=(k+1)%n)
	{
		if(b[k]==0)
		{
			s++;
			if(s==p)
			{
				s=0;
				b[k]=1;
				t--;
				if(t!=0){
				if(m%t!=0)
				p=m%t;
				else
				p=t;
				}
				if(t==0)
				{	
				return (k+1);	 
				}
			}
		}
	}
}
int main()
{
	int i,l,x,y,t,a[100];
	for(i=0;;i++){
		scanf("%d %d",&x,&y);
		if(x==0&&y==0)
		break;
		else
	   a[i]=yue(x,y);
	}  
	for(t=i,i=0;i<t;i++)
	printf("%d\n",a[i]);
}
