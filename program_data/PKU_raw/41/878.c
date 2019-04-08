int main ()
{
    int a,b,c,d,e,sum[6];
    for(int a=1;a<6;a++)
      for(int b=1;b<6;b++)
        for(int c=1;c<6;c++)
          for(int d=1;d<6;d++)
            for(int e=1;e<6;e++)
            {
              if((e!=2)&&(e!=3)&&((a-b)*(a-c)*(a-d)*(a-e)*(b-c)*(b-d)*(b-e)*(d-c)*(e-c)*(d-e)!=0))
              {
                sum[a]=(e==1);//5?????? 
                sum[b]=(b==2);
                sum[c]=(a==5);
                sum[d]=(c!=1);
                sum[e]=(d==1);
                if((sum[1]+sum[2]==2)&&(sum[3]+sum[4]+sum[5]==0))//??????????? 
                cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
              }
            }    return 0;
}
