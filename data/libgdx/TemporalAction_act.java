public boolean act(float delta) {
    if (complete)
        return true;
    Pool pool = getPool();
    // Ensure this action can't be returned to the pool while executing.
    setPool(null);
    try {
        if (!began) {
            begin();
            began = true;
        }
        time += delta;
        complete = time >= duration;
        float percent;
        if (complete)
            percent = 1;
        else {
            percent = time / duration;
            if (interpolation != null)
                percent = interpolation.apply(percent);
        }
        update(reverse ? 1 - percent : percent);
        if (complete)
            end();
        return complete;
    } finally {
        setPool(pool);
    }
}
