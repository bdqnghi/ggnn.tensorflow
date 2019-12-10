@Override
public void changed(ChangeEvent event, Actor actor) {
    if (actor == skipCleanup) {
        updateSkipCleanupState();
    } else if (actor == clearEmitters) {
        for (PooledEffect e : effects) e.free();
        effects.clear();
    }
}
