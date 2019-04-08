int main(){
    int i,j,m,a[16];

   	while(1)
   		{int count=0;//??????
   		for(i=0;i<16;i++)//????0?-1??
    		{cin>>a[i];
    		if(a[i]==-1)break;
             if(a[i]==0)break;}
   		if(a[i]==-1)break;//??????-1 ????????
   		for(j=0;j<i;j++)//??????????
   		  for(m=j+1;m<i;m++)
   			  if(a[j]==2*a[m])count++;
   		for(j=0;j<i;j++)//????????
   		   		  for(m=j+1;m<i;m++)
   		   			  if(2*a[j]==a[m])count++;
        cout<<count<<endl;}
}