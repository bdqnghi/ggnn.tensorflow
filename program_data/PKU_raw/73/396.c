/**
* file homwork.cpp
* author ??? 1100012722
* data 2011-10-29
* description ????
*/ 
int main()
{
 int a[6][6];
 int i , j ;
 int k , m ;            //????????
 int flag;
 flag = 0;
 for( i = 1 ; i <= 5 ; i ++)
	for( j = 1 ; j <= 5 ; j++)
		scanf("%d",&a[i][j]);
 
 for(i = 1 ; i <= 5 ; i ++)
 {	
	for(j = 1 ; j <= 5 ; j++)
	{
		for(k = 1 ; k <= 5 ; k ++)
		{
			if(a[i][k] > a[i][j]) break;
		}
     	        if(k == 6)
		{
			for(m = 1 ; m <= 5 ; m ++)
			{
				if(a[m][j] < a[i][j]) break;
			}
			if(m == 6)
			{	
				printf("%d %d %d",i,j,a[i][j]);
				flag = 1;
			}
		}
	}
 }
	if(flag == 0)
	printf("not found");
	return 0;
}
