int  Greedy(int Tj[],int Kg[],int n)
{
	int count=0;//???????
	int Tj_fa=n-1, Tj_lo=0; // ??????????
	int Kg_fa=n-1, Kg_lo=0;
	while(Tj_lo<=Tj_fa)
	{
		if( Tj[Tj_fa]>Kg[Kg_fa] )         // ?????????????? 
                  {     count++;   Tj_fa--;    Kg_fa--;   }
		else if(Tj[Tj_lo]>Kg[Kg_lo])   // ??????????????
                  {      count++;   Tj_lo++;   Kg_lo++; }
		else                                      //???????????????
                  {        if(Tj[Tj_lo]<Kg[Kg_fa])  count--;
	                     Tj_lo++;
		        Kg_fa--;
		}
	}
	return count;
}
int main()
{
   int T[1002],K[1002];
   int n;
  while( cin>>n&&n)
  {
       int i;
       for (i=0;i<n;i++)
       {
           cin>>T[i];
       }
       for (i=0;i<n;i++)
       {
           cin>>K[i];
       }
       sort(T,T+n);
       sort(K,K+n);
       cout<<Greedy(T,K,n)*200<<endl;
 }
   return 0;

}  

