int main()
{ 
 int a[6][6],i,j,max,h,flag;
 for (i = 1; i < 6; i++)
	 for (j = 1; j < 6; j++)
		 cin >> a[i][j];
 h = 0;
 flag = 0;
 for (i = 1; i < 6; i++)
 {   
	 max = a[i][1];
	 for (j = 1; j < 6; j++)
	 {	
		 if (a[i][j] >= max) 
		 {
			 max = a[i][j]; h = j;
		 }
	 }
	if (a[i][h] <= a[5][h] && a[i][h] <= a[1][h] && a[i][h] <= a[2][h] && a[i][h] <= a[3][h] && a[i][h] <= a[4][h]) 
		 {
	        	flag = 1;
			    cout << i << " " << h << " " << a[i][h] << endl;
		}
 }
 if (flag == 0) cout << "not found";
 return 0;
}