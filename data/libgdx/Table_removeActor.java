public boolean removeActor(Actor actor, boolean unfocus) {
    if (!super.removeActor(actor, unfocus))
        return false;
    Cell cell = getCell(actor);
    if (cell != null)
        cell.actor = null;
    return true;
}
