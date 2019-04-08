int max(int x,int y)
{
	if(x>=y)
		return x;
	else
		return y;
}
int main()
{
	int times;
	scanf("%d",&times);
	int flow;
	for(flow=0;flow<times;flow++)
	{
		char a[260];
	    char b[260];
    	scanf("%s",a);
    	scanf("%s",b);
	
    	char num[10]={'0','1','2','3','4','5','6','7','8','9'};
    	int numa[260]={0};
    	int numb[260]={0};
    	int c[260]={0};
	
    	int i,j,lena,lenb;
    	lena=strlen(a);
    	lenb=strlen(b);
	
    	int k=0;
    	for(i=lena-1;i>=0;i--)
		{
    		for(j=0;j<10;j++)
			{
		    	if(a[i]==num[j])
				{
		    		numa[k]=j;      //???a(1234567)?????(7654321)
				}
			}
	    	k++;
		}
    	k=0;         //???!!
    	for(i=lenb-1;i>=0;i--)
		{
	        for(j=0;j<10;j++)
			{
	            if(b[i]==num[j])
				{
		            numb[k]=j;       //???b(12345)?????(54321)
				}
			}
	    	k++;
		}
	    for(i=0;i<max(lena,lenb);i++)
		{
	    	if(numa[i]-numb[i]>=0)
		        c[i]=numa[i]-numb[i];     //??????,??c
		    else
			{
			    c[i]=numa[i]-numb[i]+10;
			    if(numa[i+1]>0)
			    	numa[i+1]=numa[i+1]-1;
		    	else
				{
			    	numa[i+1]=9;
			    	numa[i+2]=numa[i+2]-1;
				}
			}
		}
    	int M;
    	for(i=max(lena,lenb);i>=0;i--)
		{
	    	if(c[i]!=0)
			{
	    		M=i;
		        break;
			}
		}
	    for(i=M;i>=0;i--)
		{
	    	printf("%d",c[i]);
		}
    	printf("\n");
	}
	return 0;
}

