static private Object invokeMethod(Object object, String methodName) throws Exception {
    for (Method m : object.getClass().getMethods()) if (m.getName().equals(methodName))
        return m.invoke(object);
    throw new RuntimeException("Could not find method '" + methodName + "' on class: " + object.getClass());
}
