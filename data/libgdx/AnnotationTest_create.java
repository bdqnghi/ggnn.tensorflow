@Override
public void create() {
    font = new BitmapFont();
    batch = new SpriteBatch();
    try {
        Annotation annotation = ClassReflection.getDeclaredAnnotation(AnnotatedClass.class, TestAnnotation.class);
        if (annotation != null) {
            TestAnnotation annotationInstance = annotation.getAnnotation(TestAnnotation.class);
            println("Class annotation:\n name=" + annotationInstance.name() + ",\n values=" + Arrays.toString(annotationInstance.values()) + ",\n enum=" + annotationInstance.someEnum().toString());
        } else {
            println("ERROR: Class annotation not found.");
        }
        Field field = ClassReflection.getDeclaredField(AnnotatedClass.class, "annotatedValue");
        if (field != null) {
            Annotation[] annotations = field.getDeclaredAnnotations();
            for (Annotation a : annotations) {
                if (a.getAnnotationType().equals(TestAnnotation.class)) {
                    TestAnnotation annotationInstance = a.getAnnotation(TestAnnotation.class);
                    println("Field annotation:\n name=" + annotationInstance.name() + ",\n values=" + Arrays.toString(annotationInstance.values()) + ",\n enum=" + annotationInstance.someEnum().toString());
                    break;
                }
            }
        } else {
            println("ERROR: Field 'annotatedValue' not found.");
        }
        Method method = ClassReflection.getDeclaredMethod(AnnotatedClass.class, "annotatedMethod");
        if (method != null) {
            Annotation[] annotations = method.getDeclaredAnnotations();
            for (Annotation a : annotations) {
                if (a.getAnnotationType().equals(TestAnnotation.class)) {
                    TestAnnotation annotationInstance = a.getAnnotation(TestAnnotation.class);
                    println("Method annotation:\n name=" + annotationInstance.name() + ",\n values=" + Arrays.toString(annotationInstance.values()) + ",\n enum=" + annotationInstance.someEnum().toString());
                    break;
                }
            }
        } else {
            println("ERROR: Method 'annotatedMethod' not found.");
        }
        println("Class annotations w/@Inherit:");
        Annotation[] annotations = ClassReflection.getAnnotations(InheritClassB.class);
        for (Annotation a : annotations) {
            println(" name=" + a.getAnnotationType().getSimpleName());
        }
        if (!ClassReflection.isAnnotationPresent(InheritClassB.class, TestInheritAnnotation.class)) {
            println("ERROR: Inherited class annotation not found.");
        }
    } catch (Exception e) {
        println("FAILED: " + e.getMessage());
        message += e.getClass();
    }
}
