/**
 * Sets the name of the JSON field to store the Java class name or class tag when required to avoid ambiguity during
 * deserialization. Set to null to never output this information, but be warned that deserialization may fail. Default is
 * "class".
 */
public void setTypeName(String typeName) {
    this.typeName = typeName;
}
