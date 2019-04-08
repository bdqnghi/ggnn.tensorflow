

int main(int argc, char *argv[])
{
    int i,j,k;     int nowi;    int output;
    int part[20][16];   static int jcount[20], group[20];
    for(i=0; i<20; i++)
    {
        for(j=0; j<16; j++)
        {
           cin >> part[i][j];
           jcount[i]++;
           if(part[i][j]<=0)
           break;
        }
        if(part[i][j]== -1)
           break;
    }
    nowi=i;
    for(i=0; i<nowi; i++)
    {
       for(j=0;j<jcount[i]-1; j++)
       {
          for(k=0; k<jcount[i]-1; k++)
          {
             if( (part[i][j]/part[i][k] ==2) && (part[i][j]%part[i][k] ==0) )
             group[i]++;
          }
       }
    }
    
    for(output=0; output< nowi; output++)
    cout << group[output]<< endl;
    
    
    
    return EXIT_SUCCESS;
}