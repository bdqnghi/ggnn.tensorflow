int main()
{
   char a[9000],b[9000];
   int x[1000]={0},y[1000]={0};
   int i,j=0,k=0,sum1=0,sum2=0,minx=0,maxx=0,temp1=0,temp2=0,temp3=0,first=0;
   cin.getline(a,9000,'\n');//??????
   cin.getline(b,9000,'\n');//??????
   for(i=0;i<strlen(a);i++)//??????????????
   {
	   if(a[i]==',')sum1++;
   }sum1=sum1+1;
   j=0;
   for(i=0;i<strlen(a);i++)//??????????????
   {
	  if(a[i]>='0'&&a[i]<='9')
	   {x[j]=a[i]-'0'+x[j]*10;}
	  else if(a[i]==',')j++;
	  else break;
   }
   k=0;
   for(i=0;i<strlen(b);i++)//??????????????
   {
	   if(b[i]>='0'&&b[i]<='9')
	   {y[k]=b[i]-'0'+y[k]*10;}
	   else if(b[i]==',')k++;
	   else break;
   }
   minx=x[0];maxx=y[0];
   for(i=0;i<sum1;i++)//?????????minx??????maxx
   {
	   if(x[i]<minx)minx=x[i];
	   if(y[i]>maxx)maxx=y[i];
   }
   for(j=minx;j<maxx;j++)//????????????????
  {
	  temp3=0;
	 for(i=0;i<sum1;i++)
	 {
		 if(j>=x[i]&&j<y[i])temp3++;
	 }
	 if(temp3>sum2)sum2=temp3;//?????????sum2
  } 
   cout<<sum1<<" "<<sum2<<endl;//???????
   return 0;
}
