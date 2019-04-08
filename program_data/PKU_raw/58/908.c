int main()
{
 int n,l,p,m;
 char str[81];
 cin>>n;
 getchar();
 for(int j=1;j<=n;j++)
  {cin.getline(str,81);
  l=strlen(str);
  if((str[0]=='_')||(str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z'))
	  m=1;
  else m=0;
  for(int i=0;i<l;i++)
   {
	  if((str[i]<='9'&&str[i]>='0')||(str[i]=='_')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
	     p=1;
	  else {
		  p=0;
		  break;
	  }

    }
  if(m==1&&p==1)
   cout<<"1"<<endl;
  else cout<<"0"<<endl;
   }
   return 0;
  }
