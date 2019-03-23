public void topSort(Graph g) {
        initDfs(g);
        for (int i = 1; i <= g.numV; i++) {
            if (!mDiscovered[i]) {
                idfs(i, g);
            }
            if (mFinished) return;
        }
        while (mSorted.size() > 0) {
            out(mSorted.pop() + " ");
        }
        outln("");
    }

    