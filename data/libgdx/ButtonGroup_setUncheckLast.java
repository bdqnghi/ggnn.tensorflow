/**
 * If true, when the maximum number of buttons are checked and an additional button is checked, the last button to be checked
 * is unchecked so that the maximum is not exceeded. If false, additional buttons beyond the maximum are not allowed to be
 * checked. Default is true.
 */
public void setUncheckLast(boolean uncheckLast) {
    this.uncheckLast = uncheckLast;
}
