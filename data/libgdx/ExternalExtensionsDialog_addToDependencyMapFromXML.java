private void addToDependencyMapFromXML(Map<String, List<String>> dependencies, Element eElement, String platform) {
    if (eElement.getElementsByTagName(platform).item(0) != null) {
        Element project = (Element) eElement.getElementsByTagName(platform).item(0);
        ArrayList<String> deps = new ArrayList<String>();
        if (project.getTextContent().trim().equals("")) {
        // No dependencies required
        } else if (project.getTextContent().trim().equals("null")) {
            // Not supported
            deps = null;
        } else {
            NodeList nList = project.getElementsByTagName("dependency");
            for (int i = 0; i < nList.getLength(); i++) {
                Node nNode = nList.item(i);
                if (nNode.getNodeType() == Node.ELEMENT_NODE) {
                    Element dependencyNode = (Element) nNode;
                    deps.add(dependencyNode.getTextContent());
                }
            }
        }
        dependencies.put(platform, deps);
    }
}
