private ArrayList<JavaSegment> sortMethodsAndSections(ArrayList<JavaMethod> methods, ArrayList<JniSection> sections) {
    ArrayList<JavaSegment> segments = new ArrayList<JavaSegment>();
    segments.addAll(methods);
    segments.addAll(sections);
    Collections.sort(segments, new Comparator<JavaSegment>() {

        @Override
        public int compare(JavaSegment o1, JavaSegment o2) {
            return o1.getStartIndex() - o2.getStartIndex();
        }
    });
    return segments;
}
