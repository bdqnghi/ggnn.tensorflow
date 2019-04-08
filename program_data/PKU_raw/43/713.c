//********************************
//*???1.cpp   **
//*?????? 1200012768 **
//*???2012.10.24  **
//*???????????  **
//********************************
int main()               
{
     int m, i, j, k;
     cin >> m;
     for (i = 3; i <= m / 2; i += 2)
     {
	  	 int root1 = sqrt(i);
	  	 for (j = 3; j <= root1; j += 2)   //???????i????? 
		 {
		  	 if (i % j == 0)
			     break;
		 }
		 if (j <= root1 )      //??i????
		     continue;         //????????????? 
		 int root2 = sqrt(m - i);  
		 for (k = 3; k <= root2; k += 2)  //??????? m - i ????? 
		 {
		  	 if((m - i) % k == 0)
                 break;
		 }
		 if (k > root2 )   //m - i ???? 
		     cout << i << " " << m - i << endl;
     }
     return 0;
}   		