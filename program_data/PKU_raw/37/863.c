int main()
{
	int n,i;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		char string[202],lu[30];
		int j,k,p=0,w,q,t,sum[200],x=0;
		for(w=0;w<200;w++)
		{
			sum[w]=0;
		}
		cin.getline(string,9999);
		for(j=0;string[j]!='\0';j++)
		{   t=(int)string[j];
			sum[t]=sum[t]+1;
		}
		for(j=0;string[j]!='\0';j++)
        {  
		  t=(int)string[j];
          if(sum[t]==1)
          {x=x+1;
		  cout<<string[j]<<endl;
 	      break;
		   }
        }
		if(x==0)
		cout<<"no"<<endl;		
}
	cin.get();
	return 0;
}