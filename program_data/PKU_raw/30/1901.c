
int main(int argc, char* argv[])
{   int n,i,s=0;
    scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		if(i%7==0)
		{ s=s+0;
		}
		else if (i/10==7)
		{ s=s+0;
		}
		else if( i%10==7)
		{ s=s+0;
		}
		else
		{ s=s+i*i;
		}
	}
	printf("%d",s);
	
	return 0;
}
