
int cuo(char a)
{
 	if(a != 'A' && a!= 'T' && a!= 'C' && a!= 'G')
 		return 1;
	else 
 		return 0;
}
int main()
{
     	char a[510] = {0};
  	char b[510] = {0};
   	double bili;
  	cin >> bili >> a >> b;
  	double zong = 0, dui = 0;
  	for(int i = 0; i <= 500; i++)
  	{
   		if(a[i] == 0 || b[i] == 0)
   		{
        	if(a[i] == 0 && b[i] == 0)
         		break; 
        	else
    		{
          		cout <<"error";
          		return 0;
          	}
     	}
     	if(cuo(a[i])||cuo(b[i]))
   		{
        	cout << "error" ;
        	return 0;
     	}
		zong ++;
   		if(a[i] == b[i])
   			dui++;
	}
	if(dui / zong > bili)
		cout <<"yes";
  	else 
   		cout <<"no";	
	return 0;    
}
