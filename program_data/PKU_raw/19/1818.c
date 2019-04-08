int main()
{
    int lenth1,lenthw1,lenthw2,i,j,num=0,row=0,flag,a[101];
    char s1[101],word[101],wordnew[101],olds1[101][101];
    cin.getline(s1,101);
    cin>>word;
    cin>>wordnew;
    lenth1=strlen(s1);
    lenthw1=strlen(word);
    lenthw2=strlen(wordnew);
    for(i=0;i<lenth1;i++)
      {
		if (s1[i]==' ') 
	    	{num++;
             row=0;}
		 else 
          {olds1[num][row]=s1[i];
	       a[num]=row;
		   row++;}
       }
    for(i=0;i<=num;i++)
       { flag=1;
         for(j=0;j<lenthw1;j++)
         { if(olds1[i][j]!=word[j]) flag=0;}
         if(flag==1) 
           {a[i]=lenthw2-1;
			 for(j=0;j<lenthw2;j++) olds1[i][j]=wordnew[j];}
       }
    for(i=0;i<num;i++) 
     {for(j=0;j<=a[i];j++)
      cout<<olds1[i][j];
     	cout<<" ";}
    for(j=0;j<=a[num];j++)
	 cout<<olds1[num][j];
     return 0;
}