/**
 * Iterates over nested fragments hierarchy and returns true if one of the fragment is in the removal process
 *
 * @return true - one of the parent fragments is being removed
 */
private boolean isAnyParentFragmentRemoving() {
    Fragment fragment = getParentFragment();
    while (fragment != null) {
        if (fragment.isRemoving())
            return true;
        fragment = fragment.getParentFragment();
    }
    return false;
}
