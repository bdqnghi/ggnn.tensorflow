  public void run(){
        int len = array.size();
        while(len > 1) {
            for (int i = 0; i < len - 1; ++i) {
                if (array.get(i).compareTo(array.get(i + 1)) > 0) {
                    Collections.swap(array,i,i+1);
                }
            }
            --len;
        }
    }