int main()
{
    int mz = 0 , mq = 0 , ms = 0 , ml = 0 ;
    for(mz = 1 ; mz<=5 ; mz++)
    {
        for(mq = 1 ; mq<=5 ; mq++)
        {
            for(ms = 1 ; ms<=5 ; ms++)
            {
                for(ml = 1 ; ml<=5 ; ml++)
                {
                    if((mz+mq==ms+ml)&&(ms+mz<mq)&&(mz+ml>ms+mq))
                    {
                        for(int i = 5 ; i >=1 ; i--)
                        {
                            if(mz==i)
                                cout<<"z "<<mz*10<<endl;
                            if(mq==i)
                                cout<<"q "<<mq*10<<endl;
                            if(ms==i)
                                cout<<"s "<<ms*10<<endl;
                            if(ml==i)
                                cout<<"l "<<ml*10<<endl;
                        }
                    }
                }
            }
        }
    }
    return 0 ;
}
