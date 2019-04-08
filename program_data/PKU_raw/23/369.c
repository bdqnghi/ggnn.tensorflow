int main()
{
	char input[100],output[100][100];
	int i=0,count=0,n=0;
    cin.getline(input,101,'\n');
	while (input[i]!=0)
	  {
		 if (input[i]!=' ')
		   {
			   output[count][n]=input[i]; 
			   n++;
		   }
		 else {			     
				 output[count][n]=0;
				 count++;
				 n=0;
		      }
		 i++;
	  }

	for (i=count;i>0;i--)
		cout <<output[i] <<" ";
	cout <<output[0];

	return 0;
}