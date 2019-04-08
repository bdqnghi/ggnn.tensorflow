int main()
{  int a[1000]={0},b[1000]={0},count[1001]={0};
 int i,j=1,n,max;
 char c;
 for(i=1;i<=1000;i++)
 { cin>>a[j++];
   cin.get(c);
   if(c==',') ;
   else break;
 }   n=j-1;
 j=1;
 for(i=1;i<=1000;i++)
 {cin>>b[j++];
   cin.get(c);
   if(c==',') ;
   else break;
 
 }
 for(i=1;i<=n;i++)
 {for(j=a[i];j<b[i];j++)
    count[j]++;
 }
 max=count[1];
 for(i=1;i<=1000;i++)
 { if(count[i]>max) max=count[i];
 }


  cout<<n<<' '<<max<<endl;
 

  
  


  return 0;

	}

 