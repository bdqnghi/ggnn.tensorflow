
int depart(int x,int y)
{
	int i;
	int total;
	int t;
	for(total=1;;total++){
	    t=total;	
		for(i=0;;i++){
			if((t%x==y)&&(t/x>0)){             				                  t=t/x*(x-1);						}else{
				break;
			}		
		    if(i==x-1){
			    return total;
			}
		}
	}
}

void main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int sum;
	sum=depart(n,k);
	printf("%d",sum);
}