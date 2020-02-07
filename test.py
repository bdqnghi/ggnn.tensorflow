import pickle

file_path = "project_8.pkl"

def build_tree(script):
    """Builds an AST from a script."""
   
    with open(script, 'rb') as file_handler:
        tree = pickle.load(file_handler)
      
        return tree
    return "error"
#   return ast.parse(script)


def traverse_tree(root):
    num_nodes = 1
    queue = [root]

    root_json = {
        "node": str(root.srcml_kind),

        "children": []
    }
    queue_json = [root_json]
    while queue:
      
        current_node = queue.pop(0)
        num_nodes += 1
        # print (_name(current_node))
        current_node_json = queue_json.pop(0)


        children = [x for x in current_node.child]
        queue.extend(children)
       
        for child in children:
            print(child)
            # print "##################"
            #print child.kind

            child_json = {
                "node": str(child.srcml_kind),
                "children": []
            }

            current_node_json['children'].append(child_json)
            queue_json.append(child_json)
            # print current_node_json
  
    return root_json, num_nodes

data = build_tree(file_path)
print(len(data.element.child))
# print(data.element.child[0])
for d in data.element.child:
    print("-----------------------")
    print(d.unit.filename)
    # root = d.child
    # print(root)
    # print(root.child)
    # traverse_tree(d)