public void replace(int k, Element e) {
        //d.erase(k, t[k]);
        t[k] = e; // recopie finale
        //d.blink(k, t[k]);
    }

    public void run() {
        for(int i = 1; i < t.length; i++){
            Element tmps = t[i];
            int k=i;
            while((k > 0) && (tmps.isSmaller(t[k-1],c))){
                t[k]=t[k-1];
                k=k-1;
            }
            replace(k,tmps);
            //d.draw(t);
        }
    }