public static void quick_srt(Individual a[],int beg, int end){
        if(beg<end)
        {
            int p=Partition(a,beg,end);                      
            quick_srt(a,beg,p-1);                             
            quick_srt(a,p+1,end);                 
        }


    }

    public static int Partition(Individual a[], int beg, int end){
        int p=beg, loc;
        Individual pivot=a[beg];
        for(loc=beg+1;loc<=end;loc++)
        {
            if(pivot.amt > a[loc].amt)
            {
                a[p]=a[loc];
                a[loc]=a[p+1];
                a[p+1]=pivot;
                p=p+1;
            }
        }
        return p;   
    }

    public static int dotrans(Individual pos[], Individual neg[], Transaction tr[], int npos, int nneg)
    {
        if(neg[0] == null)
        {
            return 0;
        }
        int posp = 0, negp = 0, ntran = 0;
        float agiv=0,atke=0; 
        atke= neg[negp].amt;
        agiv = pos[posp].amt;
        for(;posp<npos&&negp<nneg;)
        {
            if(agiv<=atke)
            {
                tr[ntran] = new Transaction(); 
                tr[ntran].amt = agiv;
                tr[ntran].pgiv = pos[posp].nperson;
                tr[ntran++].ptke = neg[negp].nperson;
                atke = atke - agiv;
                posp = posp+1;
                if(posp<npos)
                    agiv = pos[posp].amt;                 
                if(atke == 0)
                {
                    negp = negp +1;
                    if(negp<nneg)
                        atke= neg[negp].amt;
                }
            }
            else
            {
                tr[ntran] = new Transaction();
                tr[ntran].amt = atke;
                tr[ntran].pgiv = pos[posp].nperson;
                tr[ntran++].ptke = neg[negp].nperson;
                agiv = agiv - atke;
                negp = negp + 1;
                if(negp<nneg)
                    atke= neg[negp].amt;    
            }    
        }
        return ntran;    
    }
