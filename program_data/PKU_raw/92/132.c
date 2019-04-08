int Compare(const void* e1,const void* e2)
{
    return *(int*)e1 - *(int*)e2; 
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		else
		{
	    	int qi[1100],tian[1100];
	     	int qhead=1,qtail=n,thead=1,ttail=n,i,num=0;
	    	for(i=1;i<=n;i++)
			{
		    	cin>>tian[i];
			}
	    	for(i=1;i<=n;i++)
			{
		    	cin>>qi[i];
			}
	    	qsort(tian+1,n,sizeof(int),Compare);
	    	qsort(qi+1,n,sizeof(int),Compare);
	    	while(thead<=ttail)
			{
				if(tian[thead]>qi[qhead])
				{
					num+=200;
					thead++;
					qhead++;
				}
				else if(tian[thead]<qi[qhead])
				{
				    num-=200;
				   	thead++;
				   	qtail--;
				}
				else
				{
					if(tian[ttail]>qi[qtail])
					{
						ttail--;
					    qtail--;
						num+=200;
					}
					else if(tian[ttail]==qi[qtail])
					{
						if(tian[thead]==qi[qtail])
						{
							thead++;
					        qtail--;
						}
						else if(tian[thead]<qi[qtail])
						{
							num-=200;
				     	    thead++;
				        	qtail--;
						}
					}
					else
					{
							num-=200;
				        	thead++;
				            qtail--;
						
					}
				}
			}
			cout<<num<<endl;
		}
	}
	return 0;
}