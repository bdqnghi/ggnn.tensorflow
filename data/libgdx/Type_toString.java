@Override
public String toString() {
    return "Type [name=" + name + ",\n clazz=" + clazz + ",\n superClass=" + superClass + ",\n assignables=" + assignables + ",\n isAbstract=" + isAbstract + ",\n isInterface=" + isInterface + ",\n isPrimitive=" + isPrimitive + ",\n isEnum=" + isEnum + ",\n isArray=" + isArray + ",\n isMemberClass=" + isMemberClass + ",\n isStatic=" + isStatic + ",\n isAnnotation=" + isAnnotation + ",\n fields=" + Arrays.toString(fields) + ",\n methods=" + Arrays.toString(methods) + ",\n constructors=" + Arrays.toString(constructors) + ",\n annotations=" + Arrays.toString(annotations) + ",\n componentType=" + componentType + ",\n enumConstants=" + Arrays.toString(enumConstants) + "]";
}
