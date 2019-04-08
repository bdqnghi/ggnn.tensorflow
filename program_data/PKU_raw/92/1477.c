
int divide(int a[],int low,int high)
{
    int tmp = a[low];
    do{
        while(low != high && a[high] >= tmp)  --high;
        if(low != high && a[high] < tmp)
        {
            a[low] = a[high];
            ++low;
        }
        while(low != high && a[low] <= tmp)   ++low;
        if(low != high && a[low] > tmp)
        {
            a[high] = a[low];
            --high;
        }
    }while(low!=high);
    a[low] = tmp;
    return low;
}

void quickSort(int a[],int low,int high)
{
    if(low >= high) return;
    int mid = divide(a,low,high);
    quickSort(a,low,mid - 1);
    quickSort(a,mid + 1,high);
}

void QuickSort(int a[],int size)
{
    quickSort(a,0,size - 1);
}


//?????????????????????????????????????????????????????????????????????????????????????????????
/*
int main()
{
    int num = 1;    //?????num???????do while??????
    //cout << "hello?!!"<<endl;
    while(1)
    {
        cin >> num;
        if(0 == num)      break;
        int money = 0;
        int tian[num];
        int qi[num];
        //cout << "even here?!!" << endl;
        for(int i = 0;i < num;++i)  cin >> tian[i];
        for(int j = 0;j < num;++j)  cin >> qi[j];
        QuickSort(tian,num);
        QuickSort(qi,num);
        //for(int i = 0;i < num;++i)  cout << tian[i] << "n";
        //for(int i = 0;i < num;++i)  cout << endl << qi[i] << "n";

        //cout << "here!" << endl;
        int low_t = 0;
        int high_t = num - 1,high_q = num - 1;
        do{
            while(high_t >= low_t && qi[high_q] >= tian[high_t])
            {
                money = (qi[high_q]==tian[low_t])?money:money-200;
                --high_q;
                ++low_t;
            }
            while(high_t >= low_t && qi[high_q] < tian[high_t])    {   --high_q;   --high_t;   money+=200; }
        }while(high_t>=low_t);

        low_t = 0;
        high_t = high_q = num-1;
        int money2 = 0;
        do{
            while(high_t >= low_t && qi[high_q] == tian[high_t])    {   --high_q;   --high_t;  }
            while(high_t >= low_t && qi[high_q] > tian[high_t])
            {
                money2 = money2-200;
                --high_q;
                ++low_t;
            }
            while(high_t >= low_t && qi[high_q] < tian[high_t])    {   --high_q;   --high_t;   money2+=200; }
        }while(high_t>=low_t);
        money = (money>money2)?money:money2;
        cout << money << endl;

    }

    //int a[3] = {92,83,71};    //????????
    //int b[3] = {95,87,74};
    //QuickSort(a,3);
    //QuickSort(b,3);
    //for(int i = 0;i < 3;++i)
    //    cout << a[i] << "\t" << b[i] << endl;


    return 0;
}
*/


//?????????????????????????????????????????????(??????)???????????????
int main()
{
    while(1)
    {
        int num,money = 0;
        cin >> num;
        if(0 == num)    break;
        int tian[num],qi[num];
        for(int i = 0;i < num;++i)  cin >> tian[i];
        for(int i = 0;i < num;++i)  cin >> qi[i];
        QuickSort(tian,num);
        QuickSort(qi,num);

        int t_slow = 0,t_fast = num - 1;
        int q_slow = 0,q_fast = num - 1;
        while(t_slow <= t_fast)
        {
            if(tian[t_fast] > qi[q_fast])
            {
                ++money;
                --t_fast;
                --q_fast;
            }
            else if(tian[t_slow] > qi[q_slow])
            {
                ++money;
                ++t_slow;
                ++q_slow;
            }
            else
            {
                if(tian[t_slow] < qi[q_fast])   --money;    //?????????????????????????????????????--money;
                --q_fast;
                ++t_slow;
            }
        }
        cout << money*200 << endl;

    }

}

