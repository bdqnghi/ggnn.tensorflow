private void initData() throws ParserConfigurationException, IOException, SAXException {
    DocumentBuilderFactory dbFactory = DocumentBuilderFactory.newInstance();
    DocumentBuilder builder = dbFactory.newDocumentBuilder();
    Document doc = builder.parse(ExternalExtensionsDialog.class.getResourceAsStream("/com/badlogic/gdx/setup/data/extensions.xml"));
    doc.getDocumentElement().normalize();
    NodeList nList = doc.getElementsByTagName("extension");
    for (int i = 0; i < nList.getLength(); i++) {
        Node nNode = nList.item(i);
        if (nNode.getNodeType() == Node.ELEMENT_NODE) {
            Element eElement = (Element) nNode;
            String name = eElement.getElementsByTagName("name").item(0).getTextContent();
            String description = eElement.getElementsByTagName("description").item(0).getTextContent();
            String version = eElement.getElementsByTagName("version").item(0).getTextContent();
            String compatibility = eElement.getElementsByTagName("compatibility").item(0).getTextContent();
            String url = eElement.getElementsByTagName("website").item(0).getTextContent();
            String[] gwtInherits = null;
            NodeList inheritsNode = eElement.getElementsByTagName("inherit");
            gwtInherits = new String[inheritsNode.getLength()];
            for (int j = 0; j < inheritsNode.getLength(); j++) gwtInherits[j] = inheritsNode.item(j).getTextContent();
            final HashMap<String, List<String>> dependencies = new HashMap<String, List<String>>();
            addToDependencyMapFromXML(dependencies, eElement, "core");
            addToDependencyMapFromXML(dependencies, eElement, "desktop");
            addToDependencyMapFromXML(dependencies, eElement, "android");
            addToDependencyMapFromXML(dependencies, eElement, "ios");
            addToDependencyMapFromXML(dependencies, eElement, "html");
            URI uri = null;
            try {
                uri = new URI(url);
            } catch (URISyntaxException e) {
                e.printStackTrace();
            }
            if (uri != null) {
                final ExternalExtension extension = new ExternalExtension(name, gwtInherits, description, version);
                extension.setDependencies(dependencies);
                tableModel.addExtension(extension, false, name, description, version, compatibility, uri);
            }
        }
    }
}
