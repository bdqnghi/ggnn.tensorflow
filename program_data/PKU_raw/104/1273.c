int main()
{    void zhao(int n,int y,int a[]);
    int x=0,y=0,a[100]={0},t=0,i=0,n=0,k=0;
	scanf("%d%d",&x,&y);
	if(x>y)
	 {t=y;
	 y=x;
	 x=t;}
	 a[0]=x;
	for(i=1;;i++)
	{ a[i]=a[i-1]/2;
	  if(a[i]/2==0)
	  { break;}
	  }
	  n=i;
	  zhao(n,y,a);
	  	
    //getchar();
    //getchar();
	return 0;
}
void zhao(int n,int y,int a[])
{ int i=0,t=0;
  for(i=0;i<=n;i++)
  { if(a[i]==y)
      { printf("%d",y);
        t=1;
        break;
        	  
	  }
		}
 
	  if(y/2!=0&&t==0)
	  zhao(n,y/2,a);
	  
}