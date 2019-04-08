int main(int argc, char* argv[])
{											// n:???  f: ????????
	int n ,i, j, f, NUM, t, num[10],A[10] ; // NUM????? t????? num:?????????? 
	scanf("%d",&n);							// A[10]:?????????				
	for (i=0;i<n;i++)
	{
		NUM=60;
		scanf("%d",&f);
		for (j=0; j<f; j++)
		{   
			scanf("%d", &num[j]);
		}
		for (j=0; j<f; j++)
		{   			
			t = 60 - num[j] - 3 * j;
			
			if (t <= 3 && t > 0)
			{
 				NUM = num[j];
				break;
			}
			else if( t<=0)
			{
				break;
			}
			else if ( t > 3)
			{
				NUM -= 3;
			}
								
		}
		A[i]=NUM;		
	}
	for (i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}


