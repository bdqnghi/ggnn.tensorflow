int main()
{
int i=0,b=0,a,flag=0;
char str1[200];
cin.getline(str1,200);
a=strlen(str1);
char *p;
p = str1;
while (i<a)
{
 	  if (str1[i]<'0' || str1[i]>'9') 
 	  {
	  p++;
	  i++; 
	  continue;
	  }
	  cout << *p;
	  if (str1[i+1]<'0' || str1[i+1]>'9') 
	  {
			cout<<endl;
			
	  		flag++;
 	   }
 	  
			p++;
	  		i++;
			

}

}