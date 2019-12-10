public void setValues(List values) {
    super.setValues(values);
    for (Iterator iter = values.iterator(); iter.hasNext(); ) {
        Value value = (Value) iter.next();
        if (value.getName().equals("Wavelength")) {
            wavelength = ((Float) value.getObject()).floatValue();
        } else if (value.getName().equals("Amplitude")) {
            amplitude = ((Float) value.getObject()).floatValue();
        }
    }
}
