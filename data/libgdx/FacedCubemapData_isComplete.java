/**
 * @return True if all sides of this cubemap are set, false otherwise.
 */
public boolean isComplete() {
    for (int i = 0; i < data.length; i++) if (data[i] == null)
        return false;
    return true;
}
