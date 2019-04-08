//#include<stdlib.h>
//#include<math.h>
int main()
{
	int n,i,j;
	char c;
	int row1,row2,col1,col2;
	int a[101][101];
	scanf("%d %d",&row2,&col2);
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			scanf("%d",&(a[i][j]));
		}
	}

	i=0;j=-1;
	c='r';
	n=row2*col2;
	row1=0;
	col1=0;
	row2=row2-1;
	col2=col2-1;
	while(n)
	{
		
		switch(c) {
		case 'l':
			j--;
			if(j==col1) {
				c='u';
				row2--;
			}
			break;
		case 'r':
			j++;
			if(j==col2) {
				c='d';
				row1++;
			}
			break;
		case 'u':
			i--;
			if(i==row1) {
				c='r';
				col1++;
			}
			break;
		case 'd':
			i++;
			if(i==row2) {
				c='l';
				col2--;
			}
		}
		printf("%d\n",a[i][j]);
		n--;
	}
	
	

	return 0;
}
