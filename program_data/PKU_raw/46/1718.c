/*
 * bianli2.cpp
 *
 *  Created on: 2011-11-5
 *      Author: 1100012857
 */

int main()
{
    int row,col,i,j;
    int a[100][100];
    cin>>row>>col;
    for (i=0;i<=row-1;i++)
    {
        for (j=0;j<=col-1;j++)
        {
            cin>>a[i][j];
        }
    }
    int lu_x=0,lu_y=0,rd_x=row-1,rd_y=col-1;
    while(lu_x<rd_x&&lu_y<rd_y)
    {
		   for (j=lu_y;j<=rd_y;j++)
			   cout<<a[lu_x][j]<<endl;
		   for (i=lu_x+1;i<=rd_x;i++)
			   cout<<a[i][rd_y]<<endl;
		   for (j=rd_y-1;j>=lu_y;j--)
			   cout<<a[rd_x][j]<<endl;
		   for (i=rd_x-1;i>=lu_x+1;i--)
			   cout<<a[i][lu_y]<<endl;
		   lu_x++;lu_y++;rd_x--;rd_y--;
    }
    if(lu_x==rd_x)
    {
    	for (j=lu_y;j<=rd_y;j++)  cout<<a[lu_x][j]<<endl;
    }
    else
    {
    	for (i=lu_x;i<=rd_x;i++)  cout<<a[i][rd_y]<<endl;
    }
    return 0;
}
