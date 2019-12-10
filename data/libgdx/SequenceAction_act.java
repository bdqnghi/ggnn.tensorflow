public boolean act(float delta) {
    if (index >= actions.size)
        return true;
    Pool pool = getPool();
    // Ensure this action can't be returned to the pool while executings.
    setPool(null);
    try {
        if (actions.get(index).act(delta)) {
            // This action was removed.
            if (actor == null)
                return true;
            index++;
            if (index >= actions.size)
                return true;
        }
        return false;
    } finally {
        setPool(pool);
    }
}
