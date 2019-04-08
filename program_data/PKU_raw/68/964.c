

	int su(int a)
	{  int i,b;
	   b=(int)sqrt(a);
	   for (i=2;i<=b;i++)
	   { if (a%i==0) {
		   return 0;
	   }
       }
	   return 1;
	   
	}

int main()
{	int n,i,j;
    scanf("%d",&n);  
	for (i=6;i<=n;i+=2)  {
		for (j=2;j<=i/2;j++)  
			if(su(j)==1 && su(i-j)==1) {
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	return 0;
}

