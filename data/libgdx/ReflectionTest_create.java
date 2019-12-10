@Override
public void create() {
    font = new BitmapFont();
    batch = new SpriteBatch();
    try {
        Vector2 fromDefaultConstructor = ClassReflection.newInstance(Vector2.class);
        println("From default constructor: " + fromDefaultConstructor);
        Method mSet = ClassReflection.getMethod(Vector2.class, "set", float.class, float.class);
        mSet.invoke(fromDefaultConstructor, 10, 11);
        println("Set to 10/11: " + fromDefaultConstructor);
        Constructor copyConstroctor = ClassReflection.getConstructor(Vector2.class, Vector2.class);
        Vector2 fromCopyConstructor = (Vector2) copyConstroctor.newInstance(fromDefaultConstructor);
        println("From copy constructor: " + fromCopyConstructor);
        Method mMul = ClassReflection.getMethod(Vector2.class, "scl", float.class);
        println("Multiplied by 2; " + mMul.invoke(fromCopyConstructor, 2));
        Method mNor = ClassReflection.getMethod(Vector2.class, "nor");
        println("Normalized: " + mNor.invoke(fromCopyConstructor));
        Vector2 fieldCopy = new Vector2();
        Field fx = ClassReflection.getField(Vector2.class, "x");
        Field fy = ClassReflection.getField(Vector2.class, "y");
        fx.set(fieldCopy, fx.get(fromCopyConstructor));
        fy.set(fieldCopy, fy.get(fromCopyConstructor));
        println("Copied field by field: " + fieldCopy);
        Json json = new Json();
        String jsonString = json.toJson(fromCopyConstructor);
        Vector2 fromJson = json.fromJson(Vector2.class, jsonString);
        println("JSON serialized: " + jsonString);
        println("JSON deserialized: " + fromJson);
        fromJson.x += 1;
        fromJson.y += 1;
        println("JSON deserialized + 1/1: " + fromJson);
        Object array = ArrayReflection.newInstance(int.class, 5);
        ArrayReflection.set(array, 0, 42);
        println("Array int: length=" + ArrayReflection.getLength(array) + ", access=" + ArrayReflection.get(array, 0));
        array = ArrayReflection.newInstance(String.class, 5);
        ArrayReflection.set(array, 0, "test string");
        println("Array String: length=" + ArrayReflection.getLength(array) + ", access=" + ArrayReflection.get(array, 0));
    } catch (Exception e) {
        message = "FAILED: " + e.getMessage() + "\n";
        message += e.getClass();
    }
}
