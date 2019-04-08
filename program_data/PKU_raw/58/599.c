int main()
{
  int n,i,j,p[100]={0};                      //????n,????i,j,??p[100]
  char a[100][81];                            //??????a[100][80]
  cin>>n;                                    //??n???
  cin.get(); 
  for(i=0;i<n;i++)
	  cin.getline(a[i],81);
  for(i=0;i<n;i++)                       //?????p[i]=1,??p[i]=0
  {   
	 if((a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z')||(a[i][0]=='_'))
	 {	 p[i]=1;
		 for(j=0;a[i][j]!='\0';j++)
		 { if((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]=='_')||(a[i][j]>='0'&&a[i][j]<='9'))
				p[i]=1;
			else {p[i]=0;break;}
		 }
	 }
	 else p[i]=0;
  }
  for(i=0;i<n;i++)                //??p[i]
	  cout<<p[i]<<endl;
  return 0;                  //?????
}