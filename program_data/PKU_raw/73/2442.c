/*??????
 *?????w5.cpp
 *Created on: 2012-11-10
 *???????
 */
int main(){
	int m,i,j,k=0;
	int a[5][5];
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
		{cin >> m;a[i][j]=m;}
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)//?????????
			{if ((a[i][j]>=a[i][0])&&(a[i][j]>=a[i][1])&&(a[i][j]>=a[i][2])&&(a[i][j]>=a[i][3])
			&&(a[i][j]>=a[i][4])&&(a[i][j]<=a[1][j])&&(a[i][j]<=a[2][j])&&(a[i][j]<=a[3][j])
			&&(a[i][j]<=a[4][j])&&(a[i][j]<=a[0][j]))
			{cout << i+1 << " " << j+1 << " " << a[i][j] << endl;break;}//????
			else k++;
			}
	if (k==25)
		{cout << "not found" << endl;}
	return 0;//????


}

