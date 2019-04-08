int main()
{
      char  s[2][80];
      for(int i=0;i<2;i++)
        cin.getline(s[i],80);
      for(int j=0;j<2;j++)
         {      int i=0;
		while(s[j][i]!='\0')    {
			if((s[j][i]>='A')&&(s[j][i]<='Z'))
                                s[j][i]=s[j][i]+32;
                               i++;
				}
	     }
      int k=0;
      k=strcmp(s[0],s[1]);
      if(k>0)  cout<<">"<<endl;
      else if(k==0)  cout<<"="<<endl;
      else  cout<<"<"<<endl;
      return 0;


}







