
    void ordenaArray(int iz, int de) {

        int i, j, x, w;

        i = iz;
        j = de;

        x = vector[(iz + de) / 2];

        do {

            while (vector[i] < x) {
                i++; 
            }

            while (x < vector[j]) {
                j--; 
            }

            if (i <= j) {

                w = vector[i];

                vector[i] = vector[j];

                vector[j] = w;
                i++;  
                j--; 
            }
        } while (i <= j);


        w = vector[i];
        vector[i] = vector[de];
        vector[de] = w;

        if (iz < j) {
            ordenaArray(iz, j);
        }
        if (i < de) {
            ordenaArray(i, de);
        }
    }