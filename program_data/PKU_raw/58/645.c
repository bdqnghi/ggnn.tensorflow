char a[80];
int main()
{
   int n,i,j;
   int OK;
   cin>>n;
   cin.get();
   for(i=0;i<n;i++)
        {
         cin.getline(a,81);
         OK=0;
		 if( (a[0]=='_') || ((a[0]-'A'>=0)&&(a[0]-'A'<=25)) || ((a[0]-'a'>=0)&&(a[0]-'a'<=25)) )
                 {for(j=0;j<80;j++)
				       {if(a[j]=='\0')break;
		                if(!( (a[j]=='_') || ((a[j]-'A'>=0)&&(a[j]-'A'<=25)) || ((a[j]-'a'>=0)&&(a[j]-'a'<=25)) || ((a[j]-'0'>=0)&&(a[j]-'0'<=9))))
						{cout<<0<<endl;OK=1;break;}}
		         if(OK==0)cout<<1<<endl;}
		 else cout<<0<<endl;
         }
   return 0;
}