
//??????? ??????????????…… 


struct work
{
    int r;
    int h;
};

struct work i, j, k, l, m;

int main()
{   
    
    
    int sum;
    

    for (i.r=1; i.r<6; ++i.r)
        for (j.r=1; j.r<6; ++j.r) {
            if (i.r==j.r) continue;
            for (k.r=1; k.r<6; ++k.r) {
                if (k.r==i.r || k.r==j.r) continue;
                for (l.r=1; l.r<6; ++l.r) {
                    if (l.r==i.r || l.r==j.r || l.r==k.r) continue;
                    for (m.r=1; m.r<6; ++m.r) {
                        if (m.r==i.r||m.r==j.r||m.r==k.r||m.r==l.r||m.r==2||m.r==3) continue;
                        sum = 0;
                        i.h = (m.r == 1);
                        j.h = (j.r == 2);
                        k.h = (i.r == 5);
                        l.h = (k.r != 1);
                        m.h = (l.r == 1);
                        if ((i.r<3 && i.h) || (i.r>2 && (!i.h)))
                        if ((j.r<3 && j.h) || (j.r>2 && (!j.h)))
                        if ((k.r<3 && k.h) || (k.r>2 && (!k.h)))
                        if ((l.r<3 && l.h) || (l.r>2 && (!l.h)))
                        if ((m.r<3 && m.h) || (m.r>2 && (!m.h)))                                                                                                
                           printf("%d %d %d %d %d", i.r, j.r, k.r, l.r, m.r);
                        
                    }
                }
            }
        }
}

                        
                        
