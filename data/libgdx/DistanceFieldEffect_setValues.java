@Override
public void setValues(List values) {
    for (Iterator iter = values.iterator(); iter.hasNext(); ) {
        Value value = (Value) iter.next();
        if ("Color".equals(value.getName())) {
            color = (Color) value.getObject();
        } else if ("Scale".equals(value.getName())) {
            scale = Math.max(1, (Integer) value.getObject());
        } else if ("Spread".equals(value.getName())) {
            spread = Math.max(0, (Float) value.getObject());
        }
    }
}
