/**
 * Sets the given attribute
 *
 * @param name the name of the attribute
 * @param value1 the first value
 * @param value2 the second value
 * @param value3 the third value
 * @param value4 the fourth value
 */
public void setAttributef(String name, float value1, float value2, float value3, float value4) {
    GL20 gl = Gdx.gl20;
    int location = fetchAttributeLocation(name);
    gl.glVertexAttrib4f(location, value1, value2, value3, value4);
}
