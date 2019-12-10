/**
 * Sets a tag to use instead of the fully qualifier class name. This can make the JSON easier to read.
 */
public void addClassTag(String tag, Class type) {
    tagToClass.put(tag, type);
    classToTag.put(type, tag);
}
