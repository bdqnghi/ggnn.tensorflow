public void update() {
    if (smooth) {
        if (norPos < 0)
            updateSimple();
        else
            updateSmooth();
    } else
        updateSharp();
}
