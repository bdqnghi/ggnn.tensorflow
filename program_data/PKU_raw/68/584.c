int main()
{
int k,x,y,n,t;
scanf("%d",&t);
for(n=6;n<=t;n=n+2)
 {for(x=3;x<=n/2;x=x+2) 
   {for(k=3;k<=sqrt(x);k++)
    if(x%k==0) break;
    if(k<=sqrt(x)) continue;
	y=n-x;
	for(k=3;k<=sqrt(y);k++)
    if(y%k==0) break;
    if(k>sqrt(y))
	   {printf("%d=%d+%d\n",n,x,y);
	    break;
	    }
    }
  }
}