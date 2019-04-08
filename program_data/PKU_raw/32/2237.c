int maxi(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int main()
{
   int n,i;
   char a[102],b[102];
   int na[102],nb[102],sum[200];
   cin>>n;
   for(i=0;i<n;i++)
   {   int j,k=0;
		memset(a,'\0',sizeof(a));
		memset(b,'\0',sizeof(b));
		memset(na,0,sizeof(na) );
		memset(nb,0,sizeof(na) );
		memset(sum,0,sizeof(sum) );
	   cin>>a>>b;
	   int lena=strlen(a),lenb=strlen(b);
	   for(j=lena-1;j>=0;j--)
		   na[k++]=a[j]-'0';
	   k=0;
	   for(j=lenb-1;j>=0;j--)
		  nb[k++]=b[j]-'0';
	   int MaxLen=maxi(lena,lenb);
	   for(j=0;j<MaxLen;j++)
	   {
		   sum[j]+=na[j]-nb[j];
		   if(sum[j]<0)
			 {  sum[j]+=10;
		        sum[j+1]--;
		   }
	   }
	   int flag=0;
	   for(j=MaxLen-1;j>=0;j--)
	   {   
		   if(sum[j]==0&&flag==0)
						;
		   if(sum[j]!=0&&flag==0)
		   {
			   flag=1;
			   cout<<sum[j];
		   }
		   else if(flag==1)
		   cout<<sum[j];
	   }
	   cout<<endl;
   }
   return 0;
		   

	   

}
