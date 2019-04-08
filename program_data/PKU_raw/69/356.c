int main()
{
   int max; //???????????
   int n;
   char a[300]; //??????????a?b
   char b[300];
   int aa[300]; //????????????aa?bb
   int bb[300];
   int h[300]; //?????
   int jinwei[300]; //?????????
   int i;
   for(i=0;i<300;i++) aa[i]=0;
   for(i=0;i<300;i++) bb[i]=0;

   cin.getline(a,300);
   cin.getline(b,300);
   int long1=strlen(a);
   int long2=strlen(b);
   for(i=1;i<=long1;i++) aa[i]=(int)a[long1-i]-48;
   for(i=1;i<=long2;i++) bb[i]=(int)b[long2-i]-48;
   if(long1>long2) max=long1;
   else max=long2;
   jinwei[0]=0;

   for(i=1;i<=max+1;i++)
   {
       if(aa[i]+bb[i]+jinwei[i-1]<10) //??????????????
       {h[i]=aa[i]+bb[i]+jinwei[i-1];
         jinwei[i]=0;
       }
       else
       {
           h[i]=aa[i]+bb[i]+jinwei[i-1]-10;
           jinwei[i]=1;
       }
   }
   for(i=max+1;i>=1;i--) //?????????0
   {
       if(h[i]!=0)
       {
           n=i;
           break;
       }
   }
   if(i==0) cout<<"0";
   else
   {
       for(i=n;i>=1;i--) cout<<h[i]; //???????
   }

   return 0;
}
