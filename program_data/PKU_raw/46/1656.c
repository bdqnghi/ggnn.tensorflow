int main(){
	int row,col,array[100][100],i,j,l,t,count1,count2;    //??????????100?100???????
	cin>>row>>col;       //??row?col
	for(i=0;i<row;i++)      //????
		for(j=0;j<col;j++)
			cin>>array[i][j];
   for(i=row-1,j=col-1,t=0,count1=row,count2=col;count1>0&&count2>0;count1=count1-2,count2=count2-2,t++)    //???????t??????????count1?count2??????????????????????
	   {
	   /*cout<<"****"<<"count1="<<count1<<' '<<"count2="<<count2<<' '<<"t="<<t<<endl;
	   cout<<"l1="<<l<<endl;*/
	   for(l=t;l<j-t;l++)         //??????????”?“
		   {cout<<array[t][l]<<endl;
		   /*cout<<"***";*/
		   }
	   /*cout<<"l2="<<l<<endl;*/
	   for(l=t;l<i-t;l++)      //?????”?“
		   {cout<<array[l][j-t]<<endl;
		   /*cout<<"***2";*/}
	   if(count1!=1)
	   for(l=j-t;l>t;l--)        //?????”?“
		   {cout<<array[i-t][l]<<endl;
	   /*cout<<"***3";*/}
	   else if(count2!=1)cout<<array[i-t][j-t];
	   if(count2!=1)
	   for(l=i-t;l>t;l--)    //?????”?“
	   { cout<<array[l][t]<<endl;
	   /*cout<<"***4";*/}
	      else if(count1!=1)cout<<array[i-t][t];
	   if(count1==1&&count2==1)
		   cout<<array[t][j-t];
	   /*cout<<'*'<<"count1="<<count1<<' '<<"count2="<<count2<<' '<<"t="<<t<<endl;*/
	   }
   /*cout<<"**"<<"count1="<<count1<<' '<<"count2="<<count2<<' '<<"t="<<t<<endl;*/
   return 0;
}