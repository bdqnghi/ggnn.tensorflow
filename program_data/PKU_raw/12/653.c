//******************************
//??????                 *
//??????                 *
//???2011.10.21             *
//******************************
int main()
{
 
 int a[20] = {0};
 while(1)
 {
	 cin >> a[0];
	 if(a[0]!=-1)
	 {
     
		 int i,k,m,num=0;
       
		 for (i=1; ; i++)
	   
		 {
       
			 cin >> a[i] ;
       
			 if (a[i]==0) break;
	   
		 }
         
		 for (k=0;k<=i-2;k++)
		 {
            for (m=k+1;m<=i-1;m++)
			{
              if ((a[m] == (2 * a[k])) || (a[k] == (a[m] * 2)))
              num++;
			}

          }
          cout << num << endl;
	   
	 }
     else 
		break;
 
 }
     return 0; 
}
    