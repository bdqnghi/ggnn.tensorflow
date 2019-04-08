
int main()
{
    int i, j, n, w, sum, flag, k, x, t= 0;
   cin >> n;
   while(t < n)
    {
        cin >> w;
		flag=0;
        for(j=0;j<w;j++)
        {
           cin >> sum;
            if(flag!=-1&&(sum+3*(j+1))>59){
				flag=1;
				break;
			}
        }
        for(k=j+1;k<w;k++)
            cin >> x;
        if(flag&&(sum<=60)&&((sum+3*j)<=60))
           cout << sum << endl;
        else
            cout << 60-j*3<< endl;
		t++;
    };
  
    return 0;
}