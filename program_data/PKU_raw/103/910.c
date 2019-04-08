/* Name        : ??????
 * Version     : 1.0 
 * Date        : 2013-01-11 
 * New         : 
 * Description : 
 * State       : Design
 */
int main()
{
    char Ch[1001]={0},ChO[1001]={0};
    int iChO[1001]={0},k=0;
    cin>>Ch;
    if (Ch[0]>95) Ch[0]-=32;
    ChO[0]=Ch[0],iChO[k]=1;
    for (int i=1;i<1001;i++)
    {
        if (Ch[i]>95) Ch[i]-=32;
        if (Ch[i]==Ch[i-1])
        {
            iChO[k]++;
        }
        else
        {
            k++;
            ChO[k]=Ch[i];
            iChO[k]=1;
        }
    }
    for (int i=0;ChO[i]!=0;i++)
    {
        cout<<'('<<ChO[i]<<','<<iChO[i]<<')';
    }
    return 0;
}
