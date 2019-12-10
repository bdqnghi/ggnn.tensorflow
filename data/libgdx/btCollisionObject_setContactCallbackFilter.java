/**
 * @param filter The new filter that is used to match the flag of the other object for a contact callback to be triggered
 */
public void setContactCallbackFilter(int filter) {
    gdxBridge.setContactCallbackFilter(contactCallbackFilter = filter);
}
