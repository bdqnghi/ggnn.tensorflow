/* Name      : ??13 
 * Version   : 1.0
 * Date      : 2012-12-16
 * New       : Null
 * Func&Feat : ????? 
 * State     : Design
 */
int main()
{
    char c,Dividend[100]={0};
    int N;
    for(int i=0;(c=getchar())!='\n';i++){Dividend[i]=c;N=i+1;}
    int PartQuotient[100]={0},PartRemainder[100]={0};
    if(N==1)cout<<0<<endl<<(int)(Dividend[0]-48)<<endl;
    else
    {
        for(int i=0;i<N;i++)
        {
            int PartDividend;
            if(i==0)PartDividend=Dividend[i]-48;
            else PartDividend=10*PartRemainder[i-1]+(Dividend[i]-48);
            //cout<<i<<' '<<PartDividend<<endl;
            PartQuotient[i]=PartDividend/13;
            PartRemainder[i]=PartDividend%13;
            //cout<<i<<' '<<PartQuotient[i]<<' '<<PartRemainder[i]<<endl;
            if((i<2&&PartQuotient[i]==0&&Dividend[i+1]!=0)==0)cout<<PartQuotient[i];
        }
        cout<<endl<<PartRemainder[N-1]<<endl;
    }
    return 0;
}
