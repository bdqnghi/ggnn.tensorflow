/**
 * @return a string containing ref count and dependency information for all assets.
 */
public synchronized String getDiagnostics() {
    StringBuffer buffer = new StringBuffer();
    for (String fileName : assetTypes.keys()) {
        buffer.append(fileName);
        buffer.append(", ");
        Class type = assetTypes.get(fileName);
        RefCountedContainer assetRef = assets.get(type).get(fileName);
        Array<String> dependencies = assetDependencies.get(fileName);
        buffer.append(ClassReflection.getSimpleName(type));
        buffer.append(", refs: ");
        buffer.append(assetRef.getRefCount());
        if (dependencies != null) {
            buffer.append(", deps: [");
            for (String dep : dependencies) {
                buffer.append(dep);
                buffer.append(",");
            }
            buffer.append("]");
        }
        buffer.append("\n");
    }
    return buffer.toString();
}
