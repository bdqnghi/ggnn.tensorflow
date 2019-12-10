private void writeUpdatedTMX(TiledMap tiledMap, FileHandle tmxFileHandle) throws IOException {
    Document doc;
    DocumentBuilder docBuilder;
    DocumentBuilderFactory docFactory = DocumentBuilderFactory.newInstance();
    try {
        docBuilder = docFactory.newDocumentBuilder();
        doc = docBuilder.parse(tmxFileHandle.read());
        Node map = doc.getFirstChild();
        while (map.getNodeType() != Node.ELEMENT_NODE || map.getNodeName() != "map") {
            if ((map = map.getNextSibling()) == null) {
                throw new GdxRuntimeException("Couldn't find map node!");
            }
        }
        setProperty(doc, map, "atlas", settings.tilesetOutputDirectory + "/" + settings.atlasOutputName + ".atlas");
        TransformerFactory transformerFactory = TransformerFactory.newInstance();
        Transformer transformer = transformerFactory.newTransformer();
        DOMSource source = new DOMSource(doc);
        outputDir.mkdirs();
        StreamResult result = new StreamResult(new File(outputDir, tmxFileHandle.name()));
        transformer.transform(source, result);
    } catch (ParserConfigurationException e) {
        throw new RuntimeException("ParserConfigurationException: " + e.getMessage());
    } catch (SAXException e) {
        throw new RuntimeException("SAXException: " + e.getMessage());
    } catch (TransformerConfigurationException e) {
        throw new RuntimeException("TransformerConfigurationException: " + e.getMessage());
    } catch (TransformerException e) {
        throw new RuntimeException("TransformerException: " + e.getMessage());
    }
}
