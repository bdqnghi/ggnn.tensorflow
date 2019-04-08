

int main()
{    int a,b,i,j=0,decimal,number=0;
  char n[20],m[20];
  cin>>a>>n>>b;
  for(i=0;n[i]!='\0';i++)
	  if (n[i]>='a'&&n[i]<='z') n[i]-=32;
  for(i=0;n[i]!='\0';i++)
  {   if(n[i]>='0'&&n[i]<='9') decimal=n[i]-'0';
  else decimal=n[i]-'A'+10;
  number=a*number+decimal;
  }
  while (number>=b)
  { if((number%b)>=10) 
	  m[j]=number%b-10+'A';
  else m[j]=number%b+'0';
     number=number/b;
	 j++;
  }
  if(number>=10) m[j]=number-10+'A';
  else m[j]=number+'0';
   for(i=j;i>=0;i--)
	   cout<<m[i];

  
  
	return 0;
}

